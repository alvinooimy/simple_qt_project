#ifndef SHOWIMG_H
#define SHOWIMG_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QGroupBox;
class QPushButton;
class QDialog;
QT_END_NAMESPACE

class showimg : public QWidget{
    Q_OBJECT

public:
    showimg(QWidget *parent = 0);

signals:
	void heart_button_signal();
	
private slots:
	void heart_button_clicked();
	
private:
	QGroupBox *createdaysgroup();
	QString dayscount(int day);
	
    QPushButton *heart_button;
	int days;
	QDialog *dlg;
};

#endif