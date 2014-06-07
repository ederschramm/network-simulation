#ifndef CONFIGURACAOSWITCHDIALOG_H
#define CONFIGURACAOSWITCHDIALOG_H

#include <QDialog>

namespace Ui {
class ConfiguracaoSwitchDialog;
}

class ConfiguracaoSwitchDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfiguracaoSwitchDialog(QWidget *parent = 0);
    ~ConfiguracaoSwitchDialog();
    
private:
    Ui::ConfiguracaoSwitchDialog *ui;
};

#endif // CONFIGURACAOSWITCHDIALOG_H
