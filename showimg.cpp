#include <QtWidgets>
#include <QDebug>

#include "showimg.h"

showimg::showimg(QWidget *parent):QWidget(parent){
	days = 0;
	
    QGridLayout *grid = new QGridLayout;
	grid -> addWidget(createdaysgroup(), 0, 0);
	
	setLayout(grid);
}

QGroupBox *showimg::createdaysgroup(){
	QGroupBox *groupbox = new QGroupBox(tr("Days"));
	
	heart_button = new QPushButton(QString::number(days));
	connect(heart_button, SIGNAL(clicked()), this, SLOT(heart_button_clicked()));
	
	//img_label = new QLabel("<img src='./picture/Whitte_LED.jpg' />");
	
	QGridLayout* mainlayout = new QGridLayout;
	mainlayout -> addWidget(heart_button, 0, 0);
	
	groupbox -> setLayout(mainlayout);
	
	return groupbox;
}

void showimg::heart_button_clicked(){
	days++;
	//qDebug() << "Button Clicked";
	heart_button -> setText(QString::number(days));
	
	QString path = dayscount(days);
	//qDebug() << path;
	
	if (path != "0"){
		dlg = new QDialog();
		
		QLabel *label = new QLabel;
		QImage image(path);
		QImage image2 = image.scaled(400, 500, Qt::KeepAspectRatio, Qt::SmoothTransformation);
		label -> setScaledContents(true);
		label -> setPixmap(QPixmap::fromImage(image2));
		
		QPushButton *closeb = new QPushButton("Close");
		connect(closeb, QPushButton::clicked, dlg, QWidget::close);
		
		QHBoxLayout *hbox = new QHBoxLayout;
		QLabel *hspacer = new QLabel;
		hbox -> addWidget(hspacer);
		hbox -> addWidget(hspacer);
		hbox -> addWidget(hspacer);
		hbox -> addWidget(closeb);
		
		
		QVBoxLayout *vbox = new QVBoxLayout(dlg);
		vbox -> addWidget(label);
		vbox -> addLayout(hbox);
		
		dlg -> setAttribute(Qt::WA_DeleteOnClose, true);
		dlg -> setWindowTitle(QString::number(days));
		dlg -> exec();
	}
}

QString showimg::dayscount(int day){
	QString output;
	switch(day){
		case 1:
			output = "./picture/profile_pic.jpg";
			break;
		default:
			output = "0";
			break;
	}
	return output;
}