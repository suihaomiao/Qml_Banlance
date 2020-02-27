#ifndef READFILE_H
#define READFILE_H

#include <QObject>
#include <QHash>
#include <QString>
#include <QDomDocument>

//该类用于读取hdr文件中关键信息
class ReadFile :public QObject
{
    Q_OBJECT
private:
    QString fileName;

public:

    static QHash<QString,double> Mydata;
//    Q_PROPERTY(QHash Mydata READ Mydata WRITE setMydata NOTIFY MydataChanged)
    ReadFile();

//signals:
//    void mydataChange(const QString &a);
};

#endif // READFILE_H
