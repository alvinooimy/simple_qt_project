#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
QT_END_NAMESPACE
class showimg;
class profile;

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow();

private slots:
	void profiletriggers();
	void settingtrigers();
	
private:
    QMenu *fileMenu;
	QAction *profileAct;
	QAction *settingAct;
    QAction *exitAct;
	
	showimg *Showimg;
	profile *Profile;
};

#endif