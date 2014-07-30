#ifndef FDFORM_H
#define FDFORM_H

#include <QMainWindow>

namespace Ui {
    class FDForm;
}

class FDForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit FDForm(QWidget *parent = 0);
    ~FDForm();

private slots:
    void on_Submit_clicked();

    void on_Clear_clicked();

private:
    Ui::FDForm *ui;
};

#endif // FDFORM_H
