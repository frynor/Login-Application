#ifndef SIGNING_H
#define SIGNING_H

#include <QDialog>

namespace Ui {
class Signing;
}

class Signing : public QDialog
{
    Q_OBJECT

public:
    explicit Signing(QWidget *parent = nullptr);
    ~Signing();

signals:
    void showMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Signing *ui;
};

#endif // SIGNING_H
