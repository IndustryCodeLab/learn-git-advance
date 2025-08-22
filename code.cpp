#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // number -> index
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end()) {
            return {mp[diff], i}; // agar mila to dono indexes return karo
        }
        mp[nums[i]] = i; // current number ko map me store karo
    }
    return {}; // agar nahi mila
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indexes: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
