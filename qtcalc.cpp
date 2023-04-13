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

/* when click number button append the new number and old one */
double append_num(double fs_num, double num)
{
	return (fs_num * 10) + num;
}

/* power function */
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

/* get result function depend on opt */
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
void QtCalc::on_pushButton_21_clicked()
{
	if (opt == '=') {
		/*
		 * if the operation before this operation is '='
		 * then just change opt
		 * equal function will do the rest
		 */
		last_opt = opt ='+';
		s_num = 0;
	} else if (opt != '\0') {
		/*
		 * if there is operation before this operation
		 * then get the result of it before make opt = '+'
		 * this is done for all operations function
		 */
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		last_opt = opt ='+';
	} else {
		/*
		 * if there is no operation before this opreation
		 * then save the number in r_num
		 */
		last_opt = opt ='+';
		r_num = s_num;
		s_num = 0;
	}
	/* append to history list */
	list.append(" + ");
}

/* minus action */
void QtCalc::on_pushButton_2_clicked()
{
	if (opt == '=') {
		last_opt = opt ='-';
		s_num = 0;
	}else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		last_opt = opt ='-';
	} else {
		last_opt = opt ='-';
		r_num = s_num;
		s_num = 0;
	}
	list.append(" - ");
}

/* multi action */
void QtCalc::on_pushButton_3_clicked()
{
	if (opt == '=') {
		last_opt = opt ='*';
		s_num = 0;
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		last_opt = opt ='*';
	} else {
		last_opt = opt ='*';
		r_num = s_num;
		s_num = 0;
	}
	list.append(" * ");
}

/* div action */
void QtCalc::on_pushButton_4_clicked()
{
	if (opt == '=') {
		last_opt = opt ='/';
		s_num  = 0;
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		last_opt = opt ='/';
	} else {
		last_opt = opt ='/';
		r_num = s_num;
		s_num = 0;
	}
	list.append(" / ");
}

/* 1 action */
void QtCalc::on_pushButton_5_clicked()
{
	/*
	 * if operation before input this number is '='
	 * then make it a new calculat
	 */
	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	/* append a new number to the current number */
	s_num = append_num(s_num, 1);
	/* show the number on screen */
	ui->label->setText(QString::number(s_num));
	list.append("1");
}


/* 2 action */
void QtCalc::on_pushButton_6_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 2);
	ui->label->setText(QString::number(s_num));

	list.append("2");
}

/* 3 action */
void QtCalc::on_pushButton_7_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 3);
	ui->label->setText(QString::number(s_num));

	list.append("3");
}

/* 4 action */
void QtCalc::on_pushButton_8_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 4);
	ui->label->setText(QString::number(s_num));

	list.append("4");
}

/* 5 action */
void QtCalc::on_pushButton_9_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 5);
	ui->label->setText(QString::number(s_num));

	list.append("5");
}

/* 6 action */
void QtCalc::on_pushButton_10_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 6);
	ui->label->setText(QString::number(s_num));
	list.append("6");

}

/* 7 action */
void QtCalc::on_pushButton_11_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 7);
	ui->label->setText(QString::number(s_num));
	list.append("7");

}

/* 8 action */
void QtCalc::on_pushButton_12_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 8);
	ui->label->setText(QString::number(s_num));
	list.append("8");

}

/* 9 action */
void QtCalc::on_pushButton_15_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 9);
	ui->label->setText(QString::number(s_num));
	list.append("9");

}

/* 0 action */
void QtCalc::on_pushButton_14_clicked()
{	if (opt == '=') {
		s_num = 0;
		r_num = 0;
		opt = '\0';
	}
	s_num = append_num(s_num, 0);
	ui->label->setText(QString::number(s_num));
	list.append("0");

}

/* dot '.' action , see TODO section on README file */
void QtCalc::on_pushButton_13_clicked()
{
	dot_flag = !dot_flag;
}

/* power action */
void QtCalc::on_pushButton_16_clicked()
{
	if (opt == '=') {
		last_opt = opt ='^';
		s_num = 0;
	} else if (opt != '\0') {
		r_num = get_result(r_num, s_num, opt);
		s_num = 0;
		last_opt = opt ='^';
	} else {
		last_opt = opt ='+';
		r_num = s_num;
		s_num = 0;
	}
	list.append(" ^ ");
}

/* clear button */
void QtCalc::on_pushButton_17_clicked()
{
	/* clear everythings, this is clear list too */
	s_num = 0;
	r_num = 0;
	last_opt = opt ='\0';
	ui->label->setText(QString::number(s_num));
	list.clear();
}

/* list button */
void QtCalc::on_pushButton_19_clicked()
{
	/* show the list window and add 'list' to it */
	w_calclist->setL_text(list);
}

/* equal action */
void QtCalc::on_pushButton_20_clicked()
{
	/*
	 * if operation before this operation is '='
	 * then return the result last operation
	 */
	if (opt == '=')
		r_num = get_result(r_num, s_num, last_opt);
	else if (opt != '\0')
		/*
		 * if there is operation before this operation
		 * and its not '='
		 * then return the result of it
		 */
		r_num = get_result(r_num, s_num, opt);

	/* set the result in screen */
	ui->label->setText(QString::number(r_num));
	opt ='=';

	/* append to the list history, and make it better */
	list.append(" = ");
	list.append(QString::number(r_num));
	list.append(" , ");
}



