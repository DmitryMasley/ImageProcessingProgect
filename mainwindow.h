#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QDockWidget>
#include <QFontDatabase>
#include <opencv2/core.hpp>
#include "opencv2/core/types_c.h"
#include "lib/metatypes.h"
#include "views/workspace.h"
#include "helpers/viewhelper.h"
#include "controllers/workspacecontroller.h"
#include "lib/views/materialbutton.h"
#include "views/tasksview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    WorkspaceController* workspaceController;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
