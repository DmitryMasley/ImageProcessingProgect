#ifndef MERGERESULTVIEW_H
#define MERGERESULTVIEW_H

#include <QObject>
#include <QWidget>
#include <QDialog>
#include <QTreeView>
#include <lib/model/image/standardimagemodel.h>
#include <lib/views/materialbutton.h>
#include <helpers/viewhelper.h>
#include <QGridLayout>
#include <QtConcurrent/QtConcurrent>
#include <QThreadPool>
#include <QFuture>
#include <QFutureWatcher>
#include "imagemerginginputdata.h"
#include "imagemergingprocessor.h"
#include <QTableView>
#include <lib/model/matmodel.h>
#include <QFuture>
#include <QFutureWatcher>
#include <QFutureInterface>
#include <QtConcurrent/QtConcurrent>
#include <QStyleFactory>
#include <QMovie>
#include <QLabel>
class MergeResultView : public QDialog
{
    Q_OBJECT
public:
    explicit MergeResultView(QWidget *parent = 0);
    void run(StandardImageModel* model, cv::Mat panImage);
    static ImageMergingProcessor *runExecutor(ImageMergingProcessor *p);
    ~MergeResultView();

signals:

public slots:
    void gotMergeResult(QMap<QString, cv::Mat> resultData);
    void showImage(QModelIndex);
    void showImageInTable(cv::Mat image);
    void progressChange(int progress);
    void finished();
    void save();
private:
    StandardImageModel* resultModel;
    QTreeView* results;
    QLabel* spinner;
    cv::Mat combineSourceImagesIntoMatrix(int cols, int rows, int type, QList<cv::Mat> sources);
    cv::Mat combineSourceMultichannerlImageIntoMatrix(int cols, int rows, int type, cv::Mat sourceImage);
};
#endif // MERGERESULTVIEW_H
