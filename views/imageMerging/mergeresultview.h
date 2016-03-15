#ifndef MERGERESULTVIEW_H
#define MERGERESULTVIEW_H

#include <QWidget>
#include <QDialog>
#include <QTreeView>
#include <lib/model/image/standardimagemodel.h>
#include <lib/views/materialbutton.h>
#include <helpers/viewhelper.h>
#include <QGridLayout>
#include <QtConcurrent/QtConcurrent>

class MergeResultView : public QDialog
{
    Q_OBJECT
public:
    explicit MergeResultView(QWidget *parent = 0);
    void run(StandardImageModel* model, cv::Mat panImage);
    ~MergeResultView();

signals:

public slots:
private:
    StandardImageModel* resultModel;
    cv::Mat combineSourceImagesIntoMatrix(int cols, int rows, int type, QList<cv::Mat> sources);
};

#endif // MERGERESULTVIEW_H
