#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>

namespace Ui {
class Client;
}

class Client : public QWidget
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    bool m_isPassWord=true;
    Ui::Client *ui;
};

#endif // CLIENT_H
