class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, bool> abc; 
        abc[nums[0]] = true;
        int length = 1;
        for (int i=1; i<nums.size(); i++){
            if (abc[nums[i]] == true){
                nums.erase(nums.begin() + i);
                i--; 
            }
            else{
                abc[nums[i]] = true;
                length++;
            }
        }
        return length;
    }
};
