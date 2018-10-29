//
// Created by hadoop on 18-10-29.
//

//编译预处理指令，防止重复包含
#ifndef CHAPTER5_CLIENT_H
#define CHAPTER5_CLIENT_H


class Client {
    static char ServerName;
    static int ClientNum;

public:
    static void ChangeServerName(char name);
    static int getClientNum();
    char getServerName();
};


#endif //CHAPTER5_CLIENT_H
