class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1) return true;
        bool flag = true;
        int i=0;
        int j = i+1;
        while(j<nums.size()){
            if ((nums[i] % 2 ==0 && nums[j] %2 ==0) || (nums[i] % 2 != 0 && nums[j] % 2 != 0 )) return false;
            i++;
            j++;
        }
        return flag;
    }
};
