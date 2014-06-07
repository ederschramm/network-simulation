#include "ConfiguracaoHubDialog.h"
#include "ui_ConfiguracaoHubDialog.h"

ConfiguracaoHubDialog::ConfiguracaoHubDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiguracaoHubDialog)
{
    ui->setupUi(this);
}

ConfiguracaoHubDialog::~ConfiguracaoHubDialog()
{
    delete ui;
}
