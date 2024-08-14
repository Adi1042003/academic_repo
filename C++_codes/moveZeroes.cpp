#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		vector<int> zeros, nonzeros;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				nonzeros.push_back(nums[i]);
			}
			else {
				zeros.push_back(nums[i]);
			}
		}
		nums.clear();
		nums.insert(nums.end(), nonzeros.begin(), nonzeros.end());
		nums.insert(nums.end(), zeros.begin(), zeros.end());
	}
};

int main() {
	vector<int> nums = { 1, 0, 2, 0, 23 };
	Solution sol;
	sol.moveZeroes(nums);
	for (int num : nums) {
		cout << num << " ";
	}
}
