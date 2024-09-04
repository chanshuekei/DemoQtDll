#ifndef MTDEMODLL_H
#define MTDEMODLL_H
#include <QObject>

class MtDemoDll: public QObject
{
    Q_OBJECT
private:
    MtDemoDll();
public:
    static MtDemoDll &getInstance()
    {
        static MtDemoDll ins;
        return ins;
    }
    ~MtDemoDll() = default;
public:
    int open();
    int close();
    int test(int a, int b);
};

#endif // MTDEMODLL_H
