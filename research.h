#ifndef RESEARCH_H
#define RESEARCH_H

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

private:
    Ui::research *ui;
};

#endif // RESEARCH_H
