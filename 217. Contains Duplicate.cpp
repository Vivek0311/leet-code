class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        unordered_map<int, bool> exist;
        for (int i=0; i<nums.size(); i++){
            if ( exist.count(nums[i]) ){
                return true;
            }
            exist[nums[i]] = true;
        }
        return flag;
    }
};
