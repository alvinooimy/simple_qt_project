#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
class QDialog;
class QLineEdit;
QT_END_NAMESPACE

class login : public QDialog{
    Q_OBJECT

public:
    login();

private slots:
	void passcheck();
	
private:
	QDialog *passdlg;
	QLineEdit *l1;
	QLineEdit *l2;
	QLineEdit *l3;
};

#endif