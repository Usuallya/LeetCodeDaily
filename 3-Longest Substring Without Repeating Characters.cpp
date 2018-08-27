#include <iostream>
#include <string>
#include <vector>
using namespace std;

//不会STL很苦逼。。只能自己写一个哈希表
struct HashNode{
    int index;
    HashNode *next;
};
class HashTable{
private:
    //C++中CONST的语法？
  int count;
  vector<HashNode> a;

public:
  HashTable(string s){
      //对a进行赋值
      a.assign()
  }
  HashTable(HashTable &hash){
      count = hash.count;
  }
  bool add(char key, int value);
  int get(char key);
};

bool HashTable::add(char key,int value){
    return true;
}

int HashTable::get(char key){
    return 0;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //求解最长不重复子串，暴力解法时间复杂度O(N3)，需要有更好的解法
        //1、考虑哈希，将每个字符作散列，以链表形式组织重复字符，并存储其出现位置，计算最大不重复数
        /*
                a b c
                0 1 2
                3 4 5
                  6
                  7

                找出一个最长相邻公共不重复区间

                p w k e
                0 1 3 4
                  2
                  5
        */
       
    }
    int lengthOfLongestSubstring(string s1,string s2){
        //KMP算法来求解最长公共子串
        return 0;
    }
};