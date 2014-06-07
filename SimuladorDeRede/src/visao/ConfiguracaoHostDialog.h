#ifndef CONFIGURACAOHOSTDIALOG_H
#define CONFIGURACAOHOSTDIALOG_H

#include <QDialog>

namespace Ui {
class ConfiguracaoHostDialog;
}

class ConfiguracaoHostDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfiguracaoHostDialog(QWidget *parent = 0);
    ~ConfiguracaoHostDialog();
    
private:
    Ui::ConfiguracaoHostDialog *ui;
};

#endif // CONFIGURACAOHOSTDIALOG_H
