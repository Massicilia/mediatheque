#ifndef RESEARCH_H
#define RESEARCH_H
#include <QtSql>
#include <QMainWindow>

namespace Ui {
class research;
}

class research : public QMainWindow
{
    Q_OBJECT

public:
    explicit research(QWidget *parent = 0);
    ~research();

private slots:
    void on_pushButton_selectUser_clicked();
    void on_pushButton_deleteUser_clicked();
    void on_pushButton_modifyUser_clicked();

private:
    Ui::research *ui;
    QSqlDatabase dbMeteo;
};

#endif // RESEARCH_H
