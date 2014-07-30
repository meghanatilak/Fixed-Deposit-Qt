#include "fdform.h"
#include "ui_fdform.h"
#include<QString>
#include<math.h>

FDForm::FDForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FDForm)
{
    ui->setupUi(this);
}

FDForm::~FDForm()
{
    delete ui;
}

void FDForm::on_Submit_clicked()
{
    QString Amount = ui->PAmount->text();
    QString Interest = ui->Interest->text();

    int Pamount = Amount.toInt();
    float Interest_int = Interest.toFloat()/100;
    float Days = ui->Month->currentIndex()*30;


    double result = Pamount * Interest_int * (Days/365) ;
    double result1 = result + Pamount;
    QString result_string = QString::number(result);
    QString result1_string = QString::number(result1);
    ui->TotalMaturity->setText(result1_string);

    ui->TotalIntrest->setText(result_string);



}

void FDForm::on_Clear_clicked()
{
    ui->PAmount->setText("");
     ui->Interest->setText("");
      ui->TotalIntrest->setText("");
       ui->TotalMaturity->setText("");
}
