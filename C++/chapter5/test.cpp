//
// Created by hadoop on 18-10-29.
//
#include <iostream>
#include "Client.h"

using namespace std;

//静态成员变量需要在类外部进行单独的初始化
int Client::ClientNum = 0;
char Client::ServerName='a';


int main(){
    Client c1;
    c1.ChangeServerName('a');
    cout<<c1.getClientNum()<<c1.getServerName()<<endl;
    Client c2;
    c2.ChangeServerName('b');
    cout<<c2.getClientNum()<<c2.getServerName()<<endl;
    return 0;

}
