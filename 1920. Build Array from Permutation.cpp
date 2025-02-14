class Solution {
    public:
        vector<int> buildArray(vector<int>& nums) {
            vector<int> permutation_array;
            for ( int i = 0; i<nums.size(); i++){
                permutation_array.emplace_back(nums[nums[i]]);
            }
            return permutation_array;
        }
    };