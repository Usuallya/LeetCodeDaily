#include <iostream>
#include <stdlib.h>
using namespace std;

void fn1();
//具有文件作用域的全局变量
int x=1,y=2;

int test() {
    cout << "Begin……" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout<<"Evaluate x and y in main()"<<endl;
    //局部变量将会屏蔽全局变量
    int x=10,y=10;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    cout<<"Setp into fn1()"<<endl;
    fn1();
    cout<<"Back in main()"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    //system("pause");
    return 0;
}

void fn1(){
    int y=200;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}