#ifndef QTCALC_H
#define QTCALC_H

#include <QDialog>

#include "calclist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtCalc; }
QT_END_NAMESPACE

class QtCalc : public QDialog
{
	Q_OBJECT

public:
	QtCalc(QWidget *parent = nullptr);
	~QtCalc();

	/*
	 * s_num mean : show number, send number, ..etc.
	 * this is the number that show on screen and has a current value.
	 */
	double s_num = 0.0;

	/*
	 * r_num mean : receive number, return number, ..etc.
	 * this is the number that save the value of operations
	 */
	double r_num = 0.0;

	/*
	 * opt - operation variable
	 */
	char opt = '\0';

	/*
	 * last_opt - last operation variable
	 * used with equal action if u need the same opreation again
	 */
	char last_opt = '\0';

	 /*  list - variable saves what you do in calculator */
	QString list;

	/*
	 * dot_flag - use it in dot
	 * see TODO section in README file
	 */
	bool dot_flag = false;

	/* inital a list window */
	Calclist *w_calclist = new Calclist(this);
private slots:

	void on_pushButton_2_clicked();

	void on_pushButton_3_clicked();

	void on_pushButton_4_clicked();

	void on_pushButton_5_clicked();

	void on_pushButton_6_clicked();

	void on_pushButton_7_clicked();

	void on_pushButton_8_clicked();

	void on_pushButton_9_clicked();

	void on_pushButton_10_clicked();

	void on_pushButton_11_clicked();

	void on_pushButton_12_clicked();

	void on_pushButton_15_clicked();

	void on_pushButton_14_clicked();

	void on_pushButton_13_clicked();

	void on_pushButton_16_clicked();

	void on_pushButton_17_clicked();

	void on_pushButton_19_clicked();

	void on_pushButton_20_clicked();

	void on_pushButton_21_clicked();

private:
	Ui::QtCalc *ui;
};
#endif // QTCALC_H
