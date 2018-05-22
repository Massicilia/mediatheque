#include "research.h"
#include "ui_research.h"

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
