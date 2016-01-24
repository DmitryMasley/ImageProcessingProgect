#ifndef WORKSPACECONTROLLER_H
#define WORKSPACECONTROLLER_H

#include <QObject>
#include <QtAwesome.h>

class WorkspaceController : public QObject
{
    Q_OBJECT
public:
    explicit WorkspaceController(QObject *parent = 0);
    ~WorkspaceController();

signals:

public slots:
};

#endif // WORKSPACECONTROLLER_H
