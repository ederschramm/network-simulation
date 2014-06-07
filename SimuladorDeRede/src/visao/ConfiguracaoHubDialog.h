#ifndef CONFIGURACAOHUBDIALOG_H
#define CONFIGURACAOHUBDIALOG_H

#include <QDialog>

namespace Ui {
class ConfiguracaoHubDialog;
}

class ConfiguracaoHubDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfiguracaoHubDialog(QWidget *parent = 0);
    ~ConfiguracaoHubDialog();
    
private:
    Ui::ConfiguracaoHubDialog *ui;
};

#endif // CONFIGURACAOHUBDIALOG_H
