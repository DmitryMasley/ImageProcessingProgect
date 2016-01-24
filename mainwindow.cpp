#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "views/fileslistwidget.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    qRegisterMetaTypeStreamOperators<QList<QList<QVariant> > >("QList<QList<QVariant> >");
    qRegisterMetaTypeStreamOperators<QMap<int, QMap<int, QVariant> > >("QMap<int, QMap<int, QVariant> >");

     workspaceController - new WorkspaceController();
//    qRegisterMetaTypeStreamOperators<cv::Mat>("Mat");

//    filesListWidget* list = new filesListWidget(ui->centralWidget);
//    QDockWidget* dock = new QDockWidget(tr("Files"), this);
//    dock->setWidget(list);
//    addDockWidget(Qt::LeftDockWidgetArea, dock);


    QVariantMap options;

    options.insert("color" , QColor("#45ff05"));
    QList<QAction *> actionsList;
    QAction* action = new QAction(viewHelper::awesome->icon(fa::plus, options), QString("Add File"), this);
    actionsList << action;
    ui->mainToolBar->addActions(actionsList);

    QDockWidget* dock = new QDockWidget(tr("Workspace"), this);
    Workspace* workspace = new Workspace(dock);
    QWidget* dockWidgetContents = new QWidget(dock);
    dockWidgetContents->setObjectName(QStringLiteral("workspace_dockwidget_contents"));
    QGridLayout* workspaceGridLayout = new QGridLayout(dockWidgetContents);
    workspaceGridLayout->setSpacing(6);
    workspaceGridLayout->setContentsMargins(11, 11, 11, 11);
    workspaceGridLayout->setObjectName(QStringLiteral("gridLayout_2"));
    workspaceGridLayout->addWidget(workspace);
    dockWidgetContents->setLayout(workspaceGridLayout);
    dock->setFeatures(QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetFloatable);
    addDockWidget(Qt::LeftDockWidgetArea, dock);
    dock->setWidget(dockWidgetContents);

    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(dock);
    shadow->setXOffset(0);
    shadow->setYOffset(2);
    shadow->setBlurRadius(10);
    dock->setGraphicsEffect(shadow);

    TasksView* tasks = new TasksView(this);
    QHBoxLayout* layout = new QHBoxLayout();
    ui->centralWidget->setLayout(layout);
    layout->addWidget(tasks);



}
MainWindow::~MainWindow()
{
    delete ui;
}