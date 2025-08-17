class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> validPairs;

        sort(nums.begin(), nums.end());
        int left, right, sum;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            left = i + 1;
            right = nums.size() - 1;
            while (left < right) {
                sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else if (sum == 0) {
                    validPairs.push_back(nums[i]);
                    validPairs.push_back(nums[left]);
                    validPairs.push_back(nums[right]);
                    result.push_back(validPairs);
                    validPairs.clear();
                    left++;
                    right--;
                    while (nums[left] == nums[left - 1] && left < right) {
                        left++;
                    }
                    while (nums[right] == nums[right + 1] && left < right) {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
