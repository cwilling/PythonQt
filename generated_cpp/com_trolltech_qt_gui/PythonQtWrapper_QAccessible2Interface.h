#ifndef PYTHONQTWRAPPER_QACCESSIBLE2INTERFACE_H
#define PYTHONQTWRAPPER_QACCESSIBLE2INTERFACE_H

#include <qaccessible2.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QAccessible2Interface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessible2Interface* new_QAccessible2Interface();
void delete_QAccessible2Interface(QAccessible2Interface* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QACCESSIBLE2INTERFACE_H
