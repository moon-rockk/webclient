#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QSslSocket>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QTcpSocket socket_tcp;
    QSslSocket socket_ssl;
    // QUdpSocket socket_;

public slots:
    void doConnected();
    void doDisconnected();
    void doReadyRead();
    void changeEnabled();

private slots:
    void on_pbConnect_clicked();
    void on_pbDisconnect_clicked();
    void on_pbSend_clicked();

    void on_pbClear_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
