#include "ConfiguracaoRoteadorDialog.h"
#include "ui_ConfiguracaoRoteadorDialog.h"

ConfiguracaoRoteadorDialog::ConfiguracaoRoteadorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiguracaoRoteadorDialog)
{
    ui->setupUi(this);
}

ConfiguracaoRoteadorDialog::~ConfiguracaoRoteadorDialog()
{
    delete ui;
}
