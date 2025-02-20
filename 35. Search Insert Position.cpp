class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        int mid; 

        while(low<=high){
            mid = (low+high) / 2;
            if (nums[mid] == target){
                return mid;
            }
            else if (target < nums[mid]){
                high = mid - 1;
            }
            else if ( target > nums[mid]){
                low = mid + 1;
            }
            
        }
        if ( target > nums[mid]){
            mid++;
        }
        else if (target < nums[mid] && mid !=0) {
            return mid;
        }
        else {
            mid = 0;
        }
        return mid;
    }
};
