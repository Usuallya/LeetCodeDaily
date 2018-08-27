#include <iostream>
#include <string>
#include <vector>
using namespace std;


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
        这个思路应该走不下去，因为无法确认哪一个区间内存在这个串，所以相当于还是要一个个遍历，一个个试，那么时间复杂度也就
        提升不了
        */
        //2、
    }
    int lengthOfLongestSubstring(string s1,string s2){
        //KMP算法来求解最长公共子串
        return 0;
    }
};