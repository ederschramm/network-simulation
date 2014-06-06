#ifndef CONFIGURACAOROTEADORDIALOG_H
#define CONFIGURACAOROTEADORDIALOG_H

#include <QDialog>

namespace Ui {
class ConfiguracaoRoteadorDialog;
}

class ConfiguracaoRoteadorDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfiguracaoRoteadorDialog(QWidget *parent = 0);
    ~ConfiguracaoRoteadorDialog();
    
private:
    Ui::ConfiguracaoRoteadorDialog *ui;
};

#endif // CONFIGURACAOROTEADORDIALOG_H
