class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark numbers as visited by negating the value at the corresponding index
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0)
                nums[index] = -nums[index];
        }

        // Collect indices that are still positive (missing numbers)
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0)
                result.push_back(i + 1);
        }
        return result;
    }
};
