#ifndef IMAGEPARAMETERSMODEL_H
#define IMAGEPARAMETERSMODEL_H

#include <QObject>

class ImageParametersModel : public QObject
{
    Q_OBJECT
public:
    explicit ImageParametersModel(QObject *parent = 0);
    ~ImageParametersModel();

signals:

public slots:
};

#endif // IMAGEPARAMETERSMODEL_H
