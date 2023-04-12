#include "qtcalc.h"
#include "ui_qtcalc.h"

QtCalc::QtCalc(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::QtCalc)
{
	ui->setupUi(this);
}

QtCalc::~QtCalc()
{
	delete ui;
}

/*  this is space for user function */
double append_num(double fs_num, double num)
{
	return (fs_num * 10) + num;
}

double power(double b_num, double p_num)
{
	double count = 1.0;
	double result = 1.0;
	while (count <= p_num) {
		result = result * b_num;
		count += 1.0;
	}
	return result;
}

double get_result(double fr_num, double fs_num, char opt)
{
	switch (opt) {
		case '+':
			return fr_num + fs_num;
			break;
		case '-':
			return fr_num - fs_num;
			break;
		case '*':
			return fr_num * fs_num;
			break;
		case '/':
			return fr_num / fs_num;
			break;
		case '^':
			return power(fr_num, fs_num);
	}
	return 0.0;
}



/* end of user functions space */

/* plus action */
void QtCalc::on_pushButton_clicked()
{
	if (opt == '=') {
		opt = '+';
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		opt = '+';
	} else {
		opt = '+';
		r_num = s_num;
		s_num = 0;
	}
}

/* minus action */
void QtCalc::on_pushButton_2_clicked()
{
	if (opt == '=') {
		opt = '-';
	}else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		opt = '-';
	} else {
		opt = '-';
		r_num = s_num;
		s_num = 0;
	}
}

/* multi action */
void QtCalc::on_pushButton_3_clicked()
{
	if (opt == '=') {
		opt = '*';
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		opt = '*';
	} else {
		opt = '*';
		r_num = s_num;
		s_num = 0;
	}
}

/* div action */
void QtCalc::on_pushButton_4_clicked()
{
	if (opt == '=') {
		opt = '/';
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		opt = '/';
	} else {
		opt = '/';
		r_num = s_num;
		s_num = 0;
	}
}

/* 1 action */
void QtCalc::on_pushButton_5_clicked()
{
	s_num = append_num(s_num, 1);
	ui->label->setText(QString::number(s_num));
}


/* 2 action */
void QtCalc::on_pushButton_6_clicked()
{
	s_num = append_num(s_num, 2);
	ui->label->setText(QString::number(s_num));

}

/* 3 action */
void QtCalc::on_pushButton_7_clicked()
{
	s_num = append_num(s_num, 3);
	ui->label->setText(QString::number(s_num));

}

/* 4 action */
void QtCalc::on_pushButton_8_clicked()
{
	s_num = append_num(s_num, 4);
	ui->label->setText(QString::number(s_num));

}

/* 5 action */
void QtCalc::on_pushButton_9_clicked()
{
	s_num = append_num(s_num, 5);
	ui->label->setText(QString::number(s_num));

}

/* 6 action */
void QtCalc::on_pushButton_10_clicked()
{
	s_num = append_num(s_num, 6);
	ui->label->setText(QString::number(s_num));

}

/* 7 action */
void QtCalc::on_pushButton_11_clicked()
{
	s_num = append_num(s_num, 7);
	ui->label->setText(QString::number(s_num));

}

/* 8 action */
void QtCalc::on_pushButton_12_clicked()
{
	s_num = append_num(s_num, 8);
	ui->label->setText(QString::number(s_num));

}

/* 9 action */
void QtCalc::on_pushButton_15_clicked()
{
	s_num = append_num(s_num, 9);
	ui->label->setText(QString::number(s_num));

}

/* 0 action */
void QtCalc::on_pushButton_14_clicked()
{
	s_num = append_num(s_num, 0);
	ui->label->setText(QString::number(s_num));

}

/* dot '.' action */
void QtCalc::on_pushButton_13_clicked()
{
	dot_flag = !dot_flag;
}

/* power action */
void QtCalc::on_pushButton_16_clicked()
{
	if (opt == '=') {
		opt = '^';
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		opt = '^';
	} else {
		opt = '+';
		r_num = s_num;
		s_num = 0;
	}
}

/* clear button */
void QtCalc::on_pushButton_17_clicked()
{
	s_num = 0;
	r_num = 0;
	opt = '\0';
	ui->label->setText(QString::number(s_num));
}

/* list button */
void QtCalc::on_pushButton_19_clicked()
{

}

/* equal action */
void QtCalc::on_pushButton_20_clicked()
{
	if (opt != '\0')
		r_num = get_result(r_num, s_num, opt);
	ui->label->setText(QString::number(r_num));
	s_num = 0;
	opt = '=';
}

