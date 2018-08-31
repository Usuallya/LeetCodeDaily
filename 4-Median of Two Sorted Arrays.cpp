/*
There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.
*/
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;


class Solution {
public:


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //1、考虑拼接两个数组，然后进行快排，找到中位数
        //是否拼接的时候时间复杂度就已经超了？
        //先拼接一下再说吧
        auto ite1 = nums1.begin();
        auto ite2 = nums2.begin();
        vector<int> nums;
        double ans = 0.0;
        while(ite1!=nums1.end()){
            nums.push_back(*ite1);
            ite1++;
        }
        while(ite2!=nums2.end()){
            nums.push_back(*ite2);
            ite2++;
        }
        sort(nums.begin(), nums.end());
        int length = nums.size();
        if(length%2==0)
           ans = (nums[length / 2 - 1] + nums[length / 2]) / 2.0;
        else
            ans = nums[length / 2];
        return ans;
    }

};



int main(){
    vector<int> a, b;
    int operation = 0;
    while(cin >> operation)
        a.push_back(operation);
    cin.clear();
    while(cin>>operation)
        b.push_back(operation);
    Solution s;
    cout << s.findMedianSortedArrays(a, b);
    system("pause");
    return 0;
}