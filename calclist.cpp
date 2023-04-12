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
