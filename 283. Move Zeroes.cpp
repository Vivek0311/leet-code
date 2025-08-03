class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() < 2)
            return;
        int i = 0, k = 0;
        int nums_length = nums.size();
        while (i < nums_length) {
            while (i < nums_length && nums[i] == 0) {
                i++;
            }
            if (i < nums_length) {
                swap(nums[i], nums[k]);
                k++;
                i++;
            }
        }
    }
};
