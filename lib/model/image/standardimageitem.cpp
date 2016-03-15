#include "standardimageitem.h"
StandardImageItem::StandardImageItem(QObject *parent) :
    AbstractItem(parent)
{
}

StandardImageItem::StandardImageItem(Mat image, QString name, QString fileName, bool isRoot, QObject *parent) :
    AbstractItem(parent)
{
    setRoot(isRoot);
    this->initImageData(image, name, fileName);

}
StandardImageItem::StandardImageItem(QString name, QString fileName, bool isRoot, QObject *parent) :
    AbstractItem(parent)
{
    setRoot(isRoot);
    initImageData(name, fileName);
}
StandardImageItem::StandardImageItem(const QMap<int, QMap<int, QVariant> > &data, bool isRoot, QObject *parent) :
    AbstractItem(parent)
{
    setRoot(isRoot);
    QStringList headers;
    headers << QString("Item Title");
    setHeaders(headers);
    setItemData(data);
    Mat image = getCVImage();
    delete _tempimage;
    _tempimage = ImageHelper::convertToQImage(image);
}
StandardImageItem::StandardImageItem(StandardImageItem &item):AbstractItem(item)
{
    QStringList headers;
    headers << QString("Item Title");
    setHeaders(headers);
    setItemData(item.getData());
    Mat image = getCVImage();
    delete _tempimage;
    _tempimage = ImageHelper::convertToQImage(image);
}

StandardImageItem::~StandardImageItem()
{
    delete _tempimage;
}
bool StandardImageItem::isMultichannel(){
    return _isMultiChannel;
}
void StandardImageItem::setIsMultichannel(bool value){
    _isMultiChannel = value;
}
cv::Mat StandardImageItem::getCVImage()
{
    cv::Mat image;
    QVariant imageValue = data(2, 0);
    if(imageValue.isValid())
    {
        image = data(2, 0).value<cv::Mat>();
    }
    return image;
}
void StandardImageItem::setCVImage(cv::Mat image)
{
    setData(2, QVariant::fromValue(image), 0);
    QImage* _qimage = ImageHelper::convertToQImage(image);
    QPixmap pixmap = QPixmap::fromImage(*_qimage);
    QIcon ic = QIcon(pixmap.scaled(40, 40));
    setData(0, ic, 1);
    delete _tempimage;
    _tempimage = ImageHelper::convertToQImage(image);
}
void StandardImageItem::clearImage()
{
    QIcon icon;
    icon.addFile(QStringLiteral(":/resource/icons/images/icons.png"), QSize(), QIcon::Normal, QIcon::Off);
    this->setData(0, QVariant(icon), 1);
    setData(2, QVariant(), 0);
    delete _tempimage;
    _tempimage = 0;
}
QImage* StandardImageItem::getQImage()
{
    return _tempimage;
}
bool StandardImageItem::canAcceptMoreChildren()
{
    bool result = false;
    if((canHaveChildren() && this->childCount()<4) || this->root())
    {
        result = true;
    }
    return result;
}
void StandardImageItem::onChildrenChanged()
{
    int count = this->childCount();
    if(canHaveChildren() && !root())
    {
        if(count == 4 || count == 3)
        {
            cv::Mat image;
            cv::Mat firstChannel = static_cast<StandardImageItem*>(child(0))->getCVImage();
            int rows = firstChannel.rows;
            int cols = firstChannel.cols;
            vector<cv::Mat> channels;
            for(int i = 0; i<count; i++)
            {
                cv::Mat channel;
                channel = static_cast<StandardImageItem*>(child(i))->getCVImage();
                if(channel.cols != cols || channel.rows != rows)
                {
                    clearImage();
                    return;
                    //do not alocate other data
//                    cv::resize(channel, channel, Size(cols,rows));
                }
                channels.push_back(channel);
            }
            cv::merge(channels, image);
            setCVImage(image);
        }
        else
        {
            clearImage();
        }
    }
}
bool StandardImageItem::isValid()
{
    QVariant value = data(1, 0);
    Mat image = value.value<Mat>();
    return value.isValid() && image.rows && image.cols;
}
bool StandardImageItem::canHaveChildren()
{
    return isMultichannel() || root();
}
void StandardImageItem::_addCharacteristicsModel()
{
//    qDeleteAll(Characteristics);
    ChList <<
              QString("Shannon Entropy") <<
              QString("Signal Entropy") <<
              QString("GStandardImageItemradation using coefficient") <<
              QString("Adaptation level of brightness") <<
              QString("Max dynamic contrast");

    for (int i=0;i<ChList.count(); i++)
    {
        QList<QList<QVariant> > data;
        QList<QVariant> value;
        value << QVariant();
        data << value;
//        Characteristics.append(new CharacteristicsItem(data, QString(ChList.value(i))));
    }
}
QString StandardImageItem::getName()
{
    return this->data(0, Qt::DisplayRole).toString();
}
QString StandardImageItem::getFileName(){
     return this->data(1, Qt::DisplayRole).toString();
}

void StandardImageItem::initImageData(Mat image, QString name, QString fileName)
{
    QIcon icon;
    if(image.rows && image.cols)
    {
        icon = ImageHelper::convertToQIcon(image);
    }
    else
    {
        icon.addFile(QStringLiteral(":/resource/icons/images/icons.png"), QSize(), QIcon::Normal, QIcon::Off);
    }

    QMap<int, QMap<int, QVariant> > emptyData;
    this->setItemData(emptyData);

    //item title
    setData(0, name, Qt::DisplayRole);
    setData(0, icon, Qt::DecorationRole);
    setData(0, fileName, Qt::ToolTipRole);

    //file data
    setData(1, fileName, Qt::DisplayRole);

    //image data
    setData(2, QVariant(QVariant::fromValue(image)), Qt::DisplayRole);

    //headers
    QStringList headers;
    headers << QString("Item Title");
    setHeaders(headers);

    _tempimage = ImageHelper::convertToQImage(image);
}
void StandardImageItem::initImageData(QString name, QString fileName)
{
    QIcon icon;
    Mat image;
    icon.addFile(QStringLiteral(":/resources/images/icons.png"), QSize(), QIcon::Normal, QIcon::Off);
    initImageData(image, name, fileName);
}
int StandardImageItem::getChannel()
{
    return this->data(3, 0).toInt();
}
StandardImageItem* StandardImageItem::findImage(QString fileName)
{
    StandardImageItem* result = 0;
    AbstractItem* item = this->findItem(QVariant(fileName), 1, 0);
    if(item)
    {
        result = static_cast<StandardImageItem*>(item);
    }
    return result;
}
