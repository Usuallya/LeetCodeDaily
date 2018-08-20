/*
    本题思路：很简单的来一个O2的扫描计算就行了，但是这样会超时间复杂度，所以需要复习的是类似map一类的算法
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int indexa=0,indexb=0;
    vector<int> b={};
    for(int i : nums) {
		for (int j : nums) {
			if (indexa != indexb) {
				if (i + j == target) {
					b.push_back(indexa);
					b.push_back(indexb);
                    return b;
				}
			}
			indexb++;
		}
		indexa++;
	}
    }
};