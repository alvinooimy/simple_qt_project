#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QGroupBox;
class QLabel;
QT_END_NAMESPACE

class profile : public QWidget{
    Q_OBJECT

public:
    profile(QWidget *parent = nullptr);
	~profile();

private:
	QGroupBox *createprofilegroup();
	QGroupBox *createacademygroup();
	QGroupBox *createskillsgroup();
	QGroupBox *codeskillsgroup();
	QGroupBox *mskillsgroup();
	QGroupBox *createhobbygroup();
	QGroupBox *createimggroup();
};

#endif