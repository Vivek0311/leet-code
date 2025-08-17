class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if (nums.size() < 4)
            return result;

        sort(nums.begin(), nums.end());
        // vector<int> validPairs;
        int left, right;
        long sum;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                left = j + 1;
                right = nums.size() - 1;
                while (left < right) {
                    sum = (long)nums[i] + (long)nums[j] + (long)nums[left] +
                          (long)nums[right];

                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else if (sum == target) {
                        result.push_back(
                            {nums[left], nums[i], nums[j], nums[right]});
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1]) {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right + 1]) {
                            right--;
                        }
                    }
                }
            }
        }
        return result;
    }
};
