#ifndef CALCLIST_H
#define CALCLIST_H

#include <QDialog>

namespace Ui {
class Calclist;
}

class Calclist : public QDialog
{
	Q_OBJECT

public:
	explicit Calclist(QWidget *parent = nullptr);
	~Calclist();
	QString l_text;

	void setL_text(const QString &newL_text);

private:
	Ui::Calclist *ui;
};

#endif // CALCLIST_H
