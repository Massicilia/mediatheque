#include "research.h"
#include "ui_research.h"
#include <QtSql/QSqlDatabase>

research::research(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::research)
{
    ui->setupUi(this);
}

research::~research()
{
    delete ui;
}

QSqlDatabase dbCatalogue;

//dbCatalogue = QSqlDatabase::addDatabase("QMYSQL");


//dbCatalogue.setHostName("192.168.8.19");
//dbCatalogue.setDatabaseName("Catalogue");
//dbCatalogue.setUserName("root");
//dbCatalogue.setPassword("12345");

