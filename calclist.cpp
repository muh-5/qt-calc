#include "calclist.h"
#include "ui_calclist.h"

Calclist::Calclist(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Calclist)
{
	ui->setupUi(this);
}

Calclist::~Calclist()
{
	delete ui;
}

/*
 * set list text from 'qtcalc' window to use it in 'calclist' window
 * then show the window
*/
void Calclist::setL_text(const QString &newL_text)
{
	l_text = newL_text;
	ui->textBrowser->setText(l_text);
	this->show();
}
