class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = (len * (len + 1)) / 2;
        int nums_sum = 0;
        for ( int i=0; i<nums.size(); i++){
            nums_sum += nums[i];
        }
        return sum - nums_sum;
    }
};
