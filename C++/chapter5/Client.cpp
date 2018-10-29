//
// Created by hadoop on 18-10-29.
//

#include "Client.h"

//实现静态成员时不用加static修饰符
void Client::ChangeServerName(char name) {
    //访问静态成员时使用类名修饰
    Client::ServerName=name;
    Client::ClientNum++;
}

int Client::getClientNum() {
    return Client::ClientNum;
}

char Client::getServerName(){
    return Client::ServerName;
}