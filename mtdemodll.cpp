#include "mtdemodll.h"
#include <QDebug>

MtDemoDll::MtDemoDll() {}

int MtDemoDll::open()
{
    qDebug() << "Open dll successfully.";
    return 0;
}

int MtDemoDll::close()
{
    qDebug() << "Close dll successfully.";
    return 0;
}

int MtDemoDll::test(int a, int b)
{
    qDebug() << "Test: "<< a << " + " << b;
    return a + b;
}
