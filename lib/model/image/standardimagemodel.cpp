#include "standardimagemodel.h"

StandardImageModel::StandardImageModel(QObject *parent) :
    StandardModel(parent)
{
    StandardImageItem* root = new StandardImageItem();
    root->setRoot(true);
    setRoot(root);
}

StandardImageModel::StandardImageModel(const QMap<int, QMap<int, QVariant> > &data, QObject *parent) :
StandardModel(parent)
{
    StandardImageItem* root = new StandardImageItem(data, this);
    root->setRoot(true);
    setRoot(root);
}
void StandardImageModel::AddBlankItem()
{
    this->addItem(new StandardImageItem(QString("Blank Image")));
}
void StandardImageModel::AddImage(const cv::Mat image, const QString fileName)
{
    emit layoutAboutToBeChanged();
    QFileInfo fileInfo(fileName);
    QString name = fileInfo.fileName();
    // find image if already in list and remove before append new one;
    StandardImageItem* child = this->findImage(fileName);
    if(child)
    {
        child->remove();
    }
    int channelsCount = image.channels();
    if(channelsCount>1)
    {
        StandardImageItem* multichannelImage = new StandardImageItem(name, fileName);
        multichannelImage->setIsMultichannel(true);
        vector<cv::Mat> imageChannels;
        cv::split(image, imageChannels);
        QHash<int, QString> ChannelsStrings;
        ChannelsStrings[0] = QString("Red");
        ChannelsStrings[1] = QString("Green");
        ChannelsStrings[2] = QString("Blue");
        ChannelsStrings[3] = QString("Alpha");
        for(int i = 0; i<channelsCount; i++)
        {
            StandardImageItem* child = new StandardImageItem(imageChannels[i], name+QString(" ")+ChannelsStrings[i], fileName);
            multichannelImage->appendChild(child);
        }
        this->root()->appendChild(multichannelImage);
    }
    else
    {
       StandardImageItem* item = new StandardImageItem(image, name, fileName, 0);
       this->addItem(item);
    }
    emit layoutChanged();
}
StandardImageItem* StandardImageModel::findImage(QString fileName)
{
    StandardImageItem* root = static_cast<StandardImageItem*>(this->root());
    return root->findImage(fileName);
}
void StandardImageModel::addCustomData(QMimeData *data, const QModelIndexList indexes) const{
    QList<QUrl> urlsList;
    foreach (QModelIndex index, indexes) {
        StandardImageItem* item = static_cast<StandardImageItem*>(getItem(index));
        QVariant name = item->getFileName();
        if(!name.isNull() && name.isValid()){
            urlsList.append(QUrl(name.toString()));
        }
    }
    data->setUrls(urlsList);
}
bool StandardImageModel::readFiles(QList<QUrl> files){
    bool result = false;
    foreach(QUrl url, files)
    {
        QString fileName = url.toLocalFile();
        if(!fileName.isEmpty() && QFileInfo(fileName).exists())
        {
            QRegExp regex = QRegExp(this->fileExtentions);
            if(regex.exactMatch(fileName))
            {
                cv::Mat image = ImageHelper::readImage(fileName);
                if(!!image.data)
                {
                    result = true;
                    this->AddImage(image, fileName);
                }
            }

        }
    }
    return result;
}
QStringList StandardImageModel::mimeTypes() const{
    QStringList types;
    types << "QByteArray";
    types << this->getItemClassName();
    if(this->canAcceptFiles()){
       types << "image/tiff" << "image/png" << "image:jpeg" << "text/uri-list";
    }
    return types;
}
void StandardImageModel::CloseImage(QModelIndex index){
    if(index.parent().isValid()){
        this->removeItem(index.parent());
    } else {
        this->removeItem(index);
    }
}
