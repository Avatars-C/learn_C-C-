#include <iostream>
#include <stdlib.h>
#include "IntCell.h"
using namespace std;
int main(void)
{
    //正常的调用方式
    IntCell m;
    cout<<"initvalue="<<m.read()<<endl;
    m.write(5);
    cout<<"Cell contents: "<<m.read()<<endl;

    //指针的调用方式
    IntCell *m1;

    m1 = new IntCell ( 0 );
    m1->write(10);
    cout<<"Cell contents: "<<m1->read()<<endl;

    delete m1;

    //三大函数的简单调用
    IntCell a(2);
    IntCell b=a;
    IntCell c;

    c=b;
    a.write(6);
    cout<<a.read()<<endl<<b.read()<<endl<<c.read()<<endl;

    return 0;
}