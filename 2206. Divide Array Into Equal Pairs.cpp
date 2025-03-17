class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if ( nums.size() % 2 !=0 ) return false;
        bool flag = false;
        unordered_map<int, bool> my_map;
        for( int i=0; i<nums.size(); i++){
            if ( my_map.count(nums[i]) ){
                my_map.erase(nums[i]);
            }
            else{
                my_map[nums[i]] = true;
            }
        }
        if ( my_map.size() == 0 ){
            flag = true;
        }
        return flag;
    }
};
