#include "ConfiguracaoHostDialog.h"
#include "ui_ConfiguracaoHostDialog.h"

ConfiguracaoHostDialog::ConfiguracaoHostDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiguracaoHostDialog)
{
    ui->setupUi(this);
}

ConfiguracaoHostDialog::~ConfiguracaoHostDialog()
{
    delete ui;
}
