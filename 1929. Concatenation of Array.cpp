class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // queue<int> qu;
        int len = nums.size(); 
        for (int i=0; i<len; i++){
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};
