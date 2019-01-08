#include <iostream>
using namespace std;

int main(){
    int count = 0,n=9;
    unsigned int flag = 1;
    while(flag){
        if(n&flag)
            count++;
        cout<<flag<<endl;
        flag = flag<<1;

    }
    cout<<count;
    return 0;
}