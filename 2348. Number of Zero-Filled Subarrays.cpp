class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long occurrences = 0;
        int i = 0, len = nums.size();

        while (i < len) {
            if (nums[i] == 0) {
                int start = i + 1;
                while (start < len && nums[start] == 0) {
                    start++;
                }
                long long cons_zeros = start - i;
                long long cons_count = (cons_zeros * (cons_zeros + 1) / 2);
                occurrences += cons_count;
                i = start;
            } else {
                i++;
            }
        }
        return occurrences;
    }
};
