#ifndef COUNTER_H
#define COUNTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Counter;
}
QT_END_NAMESPACE

class Counter : public QMainWindow
{
    Q_OBJECT

public:
    Counter(QWidget *parent = nullptr);
    ~Counter();

private slots:
    void on_incBtn_clicked();

    void on_resetBtn_clicked();

private:
    Ui::Counter *ui;
};
#endif // COUNTER_H
