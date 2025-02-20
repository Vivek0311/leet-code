class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1 ) return nums[0];
        unordered_set<int> appeared;
        for (int i=0; i<nums.size(); i++){
            if (appeared.count(nums[i]) == 1){
                appeared.erase(nums[i]);
            }
            else{
                appeared.insert(nums[i]);
            }
        }
    return *appeared.begin();
    }
};
