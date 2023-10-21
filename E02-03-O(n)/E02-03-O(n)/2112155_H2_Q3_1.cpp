#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_to_index;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_to_index.find(complement) != num_to_index.end()) {
            return { num_to_index[complement], i };
        }
        num_to_index[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = { 1, 3, 5, 7, 9 };
    int target = 12;
    vector<int> result = twoSum(nums, target);
    if (result.empty()) {
        cout << "No two sum solution" << endl;
    }
    else {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values:" << nums[result[0]] << "," << nums[result[1]] << endl;
    }
    return 0;
}