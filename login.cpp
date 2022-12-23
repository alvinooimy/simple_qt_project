#include <QtWidgets>
#include <QDebug>

#include "login.h"

login::login(){
	setWindowTitle("Enter Password");
	
	l1 = new QLineEdit(this);
	l2 = new QLineEdit(this);
	l3 = new QLineEdit(this);
	QPushButton *enterbtn = new QPushButton("Enter");
	connect(enterbtn, SIGNAL(clicked()), this, SLOT(passcheck()));
	
	QHBoxLayout *hbox1 = new QHBoxLayout;
	QLabel *spacer1 = new QLabel("-");
	QLabel *spacer2 = new QLabel("-");
	hbox1 -> addWidget(l1);
	hbox1 -> addWidget(spacer1);
	hbox1 -> addWidget(l2);
	hbox1 -> addWidget(spacer2);
	hbox1 -> addWidget(l3);
	
	QHBoxLayout *hbox2 = new QHBoxLayout;
	QLabel *hspacer = new QLabel;
	hbox2 -> addWidget(enterbtn);
	hbox2 -> addWidget(hspacer);
	hbox2 -> addWidget(hspacer);
	hbox2 -> addWidget(hspacer);
	
	QVBoxLayout *vbox = new QVBoxLayout(this);
	vbox -> addLayout(hbox1);
	vbox -> addLayout(hbox2);
}

void login::passcheck(){
	QString d = l1 -> text(); //27
	QString m = l2 -> text(); //06
	QString y = l3 -> text(); //2015
	
	if (d == "27" && m == "06" && y == "2015"){
		QMessageBox::warning(this, "Answer", "Correct Password");
		this -> accept();
	}else{
		QMessageBox::warning(this, "Answer", "Wrong Password");
	}
}
