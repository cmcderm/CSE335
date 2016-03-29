#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString myStr= "Hello World";
    qDebug() << myStr;

    return a.exec();
}
