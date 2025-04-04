class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        for (int i=1; i<nums.size(); i++){
            result[i] = result[i-1] * nums[i-1]; 
        }
        int suffix = 1;
        for (int j=nums.size() -2 ; j>=0; j--){
            suffix *= nums[j+1]; 
            result[j] *= suffix;
        }
        return result;
    }
};
