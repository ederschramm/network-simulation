#include "ConfiguracaoSwitchDialog.h"
#include "ui_ConfiguracaoSwitchDialog.h"

ConfiguracaoSwitchDialog::ConfiguracaoSwitchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiguracaoSwitchDialog)
{
    ui->setupUi(this);
}

ConfiguracaoSwitchDialog::~ConfiguracaoSwitchDialog()
{
    delete ui;
}
