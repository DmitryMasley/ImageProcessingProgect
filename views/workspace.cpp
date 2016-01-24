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

    MaterialButton* newButton = new MaterialButton(tr("Test"), this);
    newButton->setObjectName(QStringLiteral("newButton"));
    gridLayout->addWidget(newButton, 0, 1, 1, 1);

    imageTreeView = new QTreeView(this);
    imageTreeView->setObjectName(QStringLiteral("workspace_tree_view"));
    imageTreeView->setIconSize(QSize(40, 40));
    imageTreeView->setHeaderHidden(false);
    imageTreeView->setAcceptDrops(true);
    imageTreeView->viewport()->setAcceptDrops(true);
    imageTreeView->setDropIndicatorShown(true);
    imageTreeView->setDragEnabled(true);
    gridLayout->addWidget(imageTreeView, 1, 0, 1, 2);


    mainModel = new StandardImageModel(imageTreeView);
    mainModel->root()->setData(0, QString("Image Name"), Qt::DisplayRole);
        mainModel->root()->setData(1, QString("File"), Qt::DisplayRole);
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
    cv::namedWindow(ImageHelper::convertToStdString(name));
    cv::imshow(ImageHelper::convertToStdString(name), ImageHelper::RGB2BGR(image));
}
