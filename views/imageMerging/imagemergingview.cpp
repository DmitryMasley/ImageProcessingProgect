#include "imagemergingview.h"

ImageMergingView::ImageMergingView(QWidget *parent) : QWidget(parent)
{
    QGridLayout* layout = new QGridLayout(this);
    layout->setContentsMargins(0, 10, 10, 0);
    // sources tree view
    QTreeView* sources = new QTreeView(this);
    sources->setAcceptDrops(true);
    sources->setIconSize(QSize(40, 40));
    sources->setHeaderHidden(true);
    sources->viewport()->setAcceptDrops(true);
    sources->setDropIndicatorShown(true);
    sources->setDragEnabled(false);
    sources->setObjectName("image_merging_sources");

    sourceModel = new StandardImageModel(sources);
    sourceModel->root()->setData(0, tr("Image Name"), Qt::DisplayRole);
    sourceModel->setCanAcceptFiles(true);
    sources->setModel(sourceModel);
    // pan image single view
    panImageView = new SingleImageView(true, this);
    panImageView->setAcceptDrops(true);
    // buttons
    MaterialButton* add = new MaterialButton(tr("Select Image"), this);
    add->setIcon(viewHelper::awesome->icon(fa::folder).pixmap(100, 100));
    MaterialButton* remove = new MaterialButton(tr("Remove Selected"), this);
    remove->setIcon(viewHelper::awesome->icon(fa::remove).pixmap(100, 100));
    MaterialButton* result = new MaterialButton("Start", this);
    result->setLayoutDirection(Qt::RightToLeft);
    result->setIcon(viewHelper::awesome->icon(fa::arrowright).pixmap(100, 100));
    QLabel* plusLabel = new QLabel(this);
    plusLabel->setPixmap(viewHelper::awesome->icon(fa::plus).pixmap(30, 30));

    this->setLayout(layout);
    layout->addWidget(add, 0, 0, 1, 1);
    layout->addWidget(remove, 0, 1, 1, 1);
    layout->addWidget(sources, 1, 0, 1, 2);
    layout->addWidget(plusLabel, 0, 2, 2, 1);
    layout->addWidget(panImageView, 0, 3, 2, 1);
    layout->addWidget(result, 0, 4, 2, 1);

    QObject::connect(add, SIGNAL(clicked()), this, SLOT(addImage()));
    QObject::connect(remove, SIGNAL(clicked()), this, SLOT(removeImage()));
    QObject::connect(result, SIGNAL(clicked()), this, SLOT(getResult()));

    viewHelper::addShadow(sources);
    viewHelper::addShadow(plusLabel);
    viewHelper::addShadow(panImageView);
}

ImageMergingView::~ImageMergingView()
{

}
void ImageMergingView::goBack(){
    emit Vent::getInstance()->TASKS_BACK_TO_LIST(this);
}
void ImageMergingView::addImage(){
    QStringList fileNames = viewHelper::getImages();
    if (fileNames.count())
    {
        foreach (QString fileName, fileNames) {
            cv::Mat image = ImageHelper::readImage(fileName);
            sourceModel->AddImage(image, fileName);
        }
    }
}
void ImageMergingView::removeImage(){

}

void ImageMergingView::getResult(){
    if(sourceModel->rowCount()){
        MergeResultView* window = new MergeResultView(QApplication::topLevelWidgets().first());
        window->show();
        window->raise();
        window->run(sourceModel, this->panImageView->getCVImage());
    }
}
