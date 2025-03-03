class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ops = 0;
        if (nums.size() ==1 && nums[0] == k) return 1;
        sort(nums.begin(), nums.end());
        int i=0; 
        int j = nums.size() -1 ;
        while(i<j){
            if ( (nums[i] + nums[j] ) == k){
                ops++;
                i++;
                j--;
            }
            else if ( (nums[i] + nums[j]) < k){
                i++;
            }
            else{
                j--;
            }
        }
        return ops;
    }
};
