#ifndef QZEROCONFSERVICE_H
#define QZEROCONFSERVICE_H

#include <QSharedDataPointer>
#include <QHostAddress>

class QZeroConfServiceData;

class QZeroConfService
{
public:
    QZeroConfService();
    QZeroConfService(const QZeroConfService &);
    QZeroConfService &operator=(const QZeroConfService &);
    ~QZeroConfService();


    QString name() const;
    void setName(const QString &name);
    QString type() const;
    void setType(const QString &type);
    QString domain() const;
    void setDomain(const QString &domain);
    QString host() const;
    void setHost(const QString &host);
    QHostAddress ip() const;
    void setIp(QHostAddress &ip);
    QHostAddress ipv6() const;
    void setIpv6(const QHostAddress &ipv6);
    quint32 interfaceIndex() const;
    void setInterfaceIndex(const quint32 &interfaceIndex);
    quint16 port() const;
    void setPort(const quint16 port);
    QMap <QByteArray, QByteArray> txt() const;
    void setTxt(const QMap<QByteArray, QByteArray> txt);
    void appendTxt(QByteArray idx, QByteArray val = "");

    bool isValid() const;

private:
    QSharedDataPointer<QZeroConfServiceData> data;
};

#endif // QZEROCONFSERVICE_H