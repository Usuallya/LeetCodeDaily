#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    string longestPalindrome(string s) {
        int maxLength = 0,palindrome = 0;
        string::iterator iterator = s.begin();
        for (; iterator != s.end(); iterator++)
        {
            char c = *iterator;
            string::iterator last = iterator - 1;
            string::iterator llast = last - 1;

            if(c==*last || c==*llast){
                int length = checkPalindrome(iterator,s);
                if(length>maxLength){
                    maxLength = length;
                    palindrome = iterator - s.begin();
                }
            }
        }
        string str;
        int i = 0;
        while(i<maxLength){
            str.push_back(s[palindrome++]);
            i++;
        }
        return str;
    }
private:
    int checkPalindrome(string::iterator& iterator,string& s){
        string::iterator last = iterator - 1;
        int rtLength = 0;
        if(*iterator == *(last-1)){
            last -= 2;
            rtLength = 3;
            iterator++;
        }else{
            rtLength = 2;
            last -= 1;
            iterator++;
        }
        while(iterator != s.end() && last - s.begin()>=0){
            if((*iterator)==(*last))
            {
                rtLength++;
                iterator++;
                last--;
            }else
                break;
        }
        return rtLength;
    }

};

int main(){
    Solution a;
    string s;
    cin >> s;
    cout<<a.longestPalindrome(s);
    system("pause");
    return 0;
}