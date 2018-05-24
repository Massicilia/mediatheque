#include "research.h"
#include <QApplication>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QTableView>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    research w;
    w.show();

    return a.exec();

}

