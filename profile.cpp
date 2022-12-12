#include <QtWidgets>

#include "profile.h"

profile::profile(QWidget *parent):QWidget(parent){
	setWindowTitle("Profile");
	
	QGridLayout *grid = new QGridLayout;
	QVBoxLayout *vbox1 = new QVBoxLayout;
	
	vbox1 -> addWidget(createprofilegroup());
	vbox1 -> addWidget(createacademygroup());
	vbox1 -> addWidget(createhobbygroup());
	vbox1 -> addWidget(createskillsgroup());
	
	grid -> addLayout(vbox1,0,0);
	grid -> addWidget(createimggroup(),0,1);
	setLayout(grid);
}

profile::~profile(){
}  

QGroupBox *profile::createprofilegroup(){
	QGroupBox *groupbox = new QGroupBox("Profile Detail");
	
	QLabel *profile_name1 = new QLabel("Name");
	QLabel *profile_name2 = new QLabel(":");
	QLabel *profile_name3 = new QLabel("NAME");
	
	QLabel *age1 = new QLabel("Age");
	QLabel *age2 = new QLabel(":");
	QLabel *age3 = new QLabel("0");
	
	QLabel *gender1 = new QLabel("Sex");
	QLabel *gender2 = new QLabel(":");
	QLabel *gender3 = new QLabel("M/F");
	
	QGridLayout *mainlayout = new QGridLayout;
	mainlayout -> addWidget(profile_name1, 0, 0);
	mainlayout -> addWidget(profile_name2, 0, 1);
	mainlayout -> addWidget(profile_name3, 0, 2);
	mainlayout -> addWidget(age1, 1, 0);
	mainlayout -> addWidget(age2, 1, 1);
	mainlayout -> addWidget(age3, 1, 2);
	mainlayout -> addWidget(gender1, 2, 0);
	mainlayout -> addWidget(gender2, 2, 1);
	mainlayout -> addWidget(gender3, 2, 2);
	
	groupbox -> setLayout(mainlayout);
	return groupbox;
}

QGroupBox *profile::createacademygroup(){
	QGroupBox *groupbox = new QGroupBox("Academics");
	
	QLabel *academic1 = new QLabel("Master");
	QLabel *academic2 = new QLabel("Bachelor");
	
	QVBoxLayout *mainlayout = new QVBoxLayout;
	mainlayout -> addWidget(academic1);
	mainlayout -> addWidget(academic2);
	
	groupbox -> setLayout(mainlayout);
	return groupbox;
}

QGroupBox *profile::createskillsgroup(){
	QGroupBox *groupbox = new QGroupBox("Skills");
	
	QVBoxLayout *cbox = new QVBoxLayout;
	cbox -> addWidget(codeskillsgroup());
	cbox -> addWidget(mskillsgroup());
	
	groupbox -> setLayout(cbox);
	return groupbox;
}

QGroupBox *profile::codeskillsgroup(){
	QGroupBox *cbox1 = new QGroupBox("Coding");
	
	QLabel *code1 = new QLabel("C++");
	QLabel *code2 = new QLabel("C#");
	QLabel *code3 = new QLabel("Python");
	
	QVBoxLayout *vbox = new QVBoxLayout;
	
	vbox -> addWidget(code1);
	vbox -> addWidget(code2);
	vbox -> addWidget(code3);
	
	cbox1 -> setLayout(vbox);
	return cbox1;
}

QGroupBox *profile::mskillsgroup(){
	QGroupBox *cbox2 = new QGroupBox("Microsoft");
	
	QLabel *m1  = new QLabel("Power Point");
	QLabel *m2  = new QLabel("Excel");
	QLabel *m3  = new QLabel("Word");
	QLabel *m4  = new QLabel("Visio");
	
	QVBoxLayout *vbox = new QVBoxLayout;
	vbox -> addWidget(m1);
	vbox -> addWidget(m2);
	vbox -> addWidget(m3);
	vbox -> addWidget(m4);
	
	cbox2 -> setLayout(vbox);
	return cbox2;
}

QGroupBox *profile::createhobbygroup(){
	QGroupBox *groupbox = new QGroupBox("Hobby");
	
	QLabel *h1 = new QLabel("TaeKwon-Do");
	QLabel *h2 = new QLabel("Sleep");
	QLabel *h3 = new QLabel("Eat");
	
	QVBoxLayout *mainlayout = new QVBoxLayout;
	mainlayout -> addWidget(h1);
	mainlayout -> addWidget(h2);
	mainlayout -> addWidget(h3);
	
	groupbox -> setLayout(mainlayout);
	return groupbox;
}

QGroupBox *profile::createimggroup(){
	QGroupBox *groupbox = new QGroupBox("Profile Pic");
	
	QImage image("./picture/profile_pic.jpg");
	QImage image2 = image.scaled(400, 500, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	QLabel *img_label = new QLabel;
	img_label -> setScaledContents(true);
	img_label -> setPixmap(QPixmap::fromImage(image2));
	
	QGridLayout *mainlayout = new QGridLayout;
	mainlayout -> addWidget(img_label, 0, 0);
	
	groupbox -> setLayout(mainlayout);
	
	return groupbox;
}
