

#include <iostream>
#include <vector>
using namespace std;

bool dumplicate(int numbers[],int length){
    //第一趟，把所有的数字放到对应下标的位置上

    //输入检查
    if(numbers==nullptr || length<=0)
        return false;

    for(int i = 0 ;i<length;i++){
        if(numbers[i]<0||numbers[i]>length-1)
            return false;
        if(numbers[i]!=i)
        {
            int tmp = numbers[numbers[i]];
            numbers[numbers[i]]=numbers[i];
            numbers[i]=tmp;
        }
    }
    //第二趟，一旦发现再有对不上号的，那就是重复
    for(int i=0;i<length;i++){
        if(numbers[i]!=i)
            return true;
    }
    return false;
}

int main(){
    vector<int> vi;
    int num;
    while(cin>>num)
        vi.push_back(num);
    cout<<dumplicate(vi,vi.size());
}