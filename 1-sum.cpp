/*
    本题思路：很简单的来一个O(N2)的扫描计算就行了，但是这样会超时间复杂度，所以需要复习的是类似map一类的算法？
*/
#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Solution {
public:
//以下是低效解法，时间复杂度为O(N2)
    vector<int> twoSum(vector<int>& nums, int target) {
    int indexa=0,indexb=0;
    vector<int> b={};
		for (indexa; indexa < nums.size(); indexa++)
		{
			for (indexb = indexa; indexb < nums.size(); indexb++)
			{
					if (nums[indexa] + nums[indexb] == target)
					{
						b.push_back(indexa);
						b.push_back(indexb);
						return b;
					}
				
			}
		}
	}
	//高效解法
	vector<int> twoSumHigh(vector<int>& nums, int target) {
		//如果超过了时间复杂度怎么办？这里需要一个更低时间复杂度的方法
		return null;
	}
};

int main(){
	Solution a;
	vector<int> nums;
	int num,target;
	cout << "Please Input nums:" << endl;
	while(cin>>num){
		nums.push_back(num);
	}
	cout<<"Please input target:";
	cin >> target;
	a.twoSum(nums, target);

	system("pause");
	return 0;
}