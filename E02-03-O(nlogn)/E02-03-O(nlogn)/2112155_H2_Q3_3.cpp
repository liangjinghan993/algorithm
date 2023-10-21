#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	vector<pair<int, int>>pairs;
	for (int i = 0; i < nums.size(); i++)
	{
		pairs.push_back(make_pair(nums[i], i));
	}
	sort(pairs.begin(), pairs.end());
	int left = 0;
	int right = nums.size() - 1;
	while (left < right) {
		if (pairs[left].first + pairs[right].first == target)
		{
			return { pairs[left].second,pairs[right].second };
		}
		else if (pairs[left].first + pairs[right].first < target)
		{
			left++;
		}
		else {
			right--;
		}
	}
	return{};
}
int main()
{
	vector<int> nums = { 1,3,5,7,9 };
	int target = 12;
	vector<int>result = twoSum(nums, target);
	if (result.empty()) {
		cout << "No two sum solution" << endl;
	}
	else {
		cout << "Indices:" << result[0] << "," << result[1] << endl;
		cout << "Values:" << nums[result[0]] << "," << nums[result[1]] << endl;
	}
	return 0;
}