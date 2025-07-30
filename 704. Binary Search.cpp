class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1 && nums[0] == target) return 0;
        else if (nums.size() == 1 && nums[0] != target) return -1;
        int low = 0, high = nums.size() - 1, mid = 0;
        while(low<=high){
            mid = (low + high) /2;
            if (nums[mid] == target ) return mid;
            else if ( target > nums[mid]) {
                low = mid + 1;
            }
            else if (target < nums[mid]) {
                high = mid -1;
            }
        }
        return -1;
    }
};
