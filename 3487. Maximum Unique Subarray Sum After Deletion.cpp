class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        int maxNum = INT_MIN;
        vector<int> seenele(101, 0);
        for ( int i=0; i<nums.size(); i++){
            if (nums[i] <=0){
                maxNum = max(nums[i], maxNum);
            }
            else if (seenele[nums[i]] == 0){
                sum += nums[i];
                seenele[nums[i]] = 1;
            }
        }
        return sum == 0 ? maxNum : sum;
    }
};
