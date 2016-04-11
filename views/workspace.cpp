#include "workspace.h"

Workspace::Workspace(QWidget *parent) : QWidget(parent)
{
    QGridLayout* gridLayout = new QGridLayout(this);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    gridLayout->setObjectName(QStringLiteral("workspace_layout"));
    this->setLayout(gridLayout);


    addImageButton = new MaterialButton(tr("Add Image"), this);
    addImageButton->setObjectName(QStringLiteral("workspace_add_image"));
    gridLayout->addWidget(addImageButton, 0, 0, 1, 1);

    removeImageBtn = new MaterialButton(tr("Remove"), this);
    removeImageBtn->setObjectName(QStringLiteral("workspace_remove_image"));
    gridLayout->addWidget(removeImageBtn, 0, 1, 1, 1);

    imageTreeView = new QTreeView(this);
    imageTreeView->setObjectName(QStringLiteral("workspace_tree_view"));
    imageTreeView->setIconSize(QSize(40, 40));
    imageTreeView->setHeaderHidden(true);
    imageTreeView->setAcceptDrops(true);
    imageTreeView->viewport()->setAcceptDrops(true);
    imageTreeView->setDropIndicatorShown(true);
    imageTreeView->setDragEnabled(true);
    imageTreeView->setItemDelegate(new ImageItemDelegate(imageTreeView));
    gridLayout->addWidget(imageTreeView, 1, 0, 1, 2);

    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(imageTreeView);
    shadow->setXOffset(0);
    shadow->setYOffset(2);
    shadow->setBlurRadius(10);
    imageTreeView->setGraphicsEffect(shadow);


    mainModel = new StandardImageModel(imageTreeView);
    mainModel->root()->setData(0, tr("Image Name"), Qt::DisplayRole);
    mainModel->setCanAcceptFiles(true);
    imageTreeView->setModel(mainModel);

    this->initEvents();
}

Workspace::~Workspace()
{

}
void Workspace::initEvents(){
    QObject::connect(addImageButton, SIGNAL(clicked()), this, SLOT(addImage()));
    QObject::connect(imageTreeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(showImage(QModelIndex)));
    QObject::connect(removeImageBtn, SIGNAL(clicked()), this, SLOT(removeSelectedImage()));
}

void Workspace::addImage(){
   QStringList fileNames = QFileDialog::getOpenFileNames(static_cast<QWidget*>(this->parent()), tr("Open image"),  "//", tr("Images (*.jpg *.png *.tif *.tiff *.jpeg)"));
    if (fileNames.count())
    {
        foreach (QString fileName, fileNames) {
            cv::Mat image = ImageHelper::readImage(fileName);
            mainModel->AddImage(image, fileName);
            emit ImageAdded(image, fileName);
        }
    }
}
void Workspace::showImage(QModelIndex index){
    StandardImageItem* item = static_cast<StandardImageItem*>(mainModel->getItem(index));
    cv::Mat image = item->getCVImage();
    QString name = item->getFileName();
    cv::namedWindow(ImageHelper::convertToStdString(name), CV_WINDOW_NORMAL | CV_WINDOW_KEEPRATIO | CV_GUI_EXPANDED);
    cv::imshow(ImageHelper::convertToStdString(name), ImageHelper::RGB2BGR(image));
}
void Workspace::removeSelectedImage(){
    QModelIndexList indexes = imageTreeView->selectionModel()->selectedRows();
    foreach (QModelIndex index, indexes) {
        if(index.isValid()){
            mainModel->CloseImage(index);
        }
    }
}
