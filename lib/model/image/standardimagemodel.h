#ifndef STANDARDIMAGEMODEL_H
#define STANDARDIMAGEMODEL_H

#include <QObject>
#include <qurl.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/cuda.hpp>
#include "../standardmodel.h"
#include "standardimageitem.h"
#include <QFileInfo>
#include <QUrl>
#include "imageparametersmodel.h"

class StandardImageModel : public StandardModel
{
    Q_OBJECT
public:
    explicit StandardImageModel(QObject *parent = 0);
    explicit StandardImageModel(const QMap<int, QMap<int, QVariant> > &data, QObject *parent = 0);
    void AddBlankItem();
    void AddMultichannelImage(const cv::Mat image, const QString fileName);
    void AddImage(const cv::Mat image, const QString fileName);
    void CloseImage(QModelIndex index);
    StandardImageItem* findImage(QString fileName);
    void addCustomData(QMimeData *data, const QModelIndexList indexes) const;
    QStringList mimeTypes() const;
    ImageParametersModel* parmsModel;
signals:

public slots:
private:
    bool readFiles(QList<QUrl> files);
    QString fileExtentions = ".*\\.jpg$|.*\\.png$|.*\\.tif$|.*\\.tiff$|.*\\.jpeg$";
signals:

public slots:

};

#endif // STANDARDIMAGEMODEL_H
