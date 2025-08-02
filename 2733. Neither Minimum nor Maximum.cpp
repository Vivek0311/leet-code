class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int num : nums) {
            mini = min(num, mini);
            maxi = max(num, maxi);
        }
        for (int num : nums) {
            if (num != mini && num != maxi) {
                return num;
            }
        }
        return -1;
    }
};
