#include <QtWidgets>

#include "mainwindow.h"
#include "showimg.h"
#include "profile.h"

MainWindow::MainWindow(){
	setWindowTitle("LOVE");
	
	profileAct = new QAction("Profile", this);
	connect(profileAct, SIGNAL(triggered()), this, SLOT(profiletriggers()));
	
	settingAct = new QAction("Settings", this);
	connect(settingAct, SIGNAL(triggered()), this, SLOT(settingtrigers()));
	
    exitAct = new QAction("Exit", this);
    exitAct -> setShortcuts(QKeySequence::Quit);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
	
    fileMenu = menuBar() -> addMenu("File");
	fileMenu -> addAction(profileAct);
    fileMenu -> addAction(settingAct);
    fileMenu -> addAction(exitAct);
	
	Showimg = new showimg;	
	setCentralWidget(Showimg);
}

void MainWindow::profiletriggers(){
	Profile = new profile();
	Profile -> setAttribute(Qt::WA_DeleteOnClose, true);
	Profile -> show();
	/*QMessageBox msgbox;
	msgbox.setText("There's no Setting\nHaHaHa");
	msgbox.exec();*/
}
	
void MainWindow::settingtrigers(){
	QMessageBox::warning(this, "Settings", "There's no Setting\nHaHaHa");
}