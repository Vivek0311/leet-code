class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int temp;
            int size = 0;
            if (nums.size() == 1 && nums[0] == val){
                // nums.erase(nums.begin());
                return 0;
            }
            if (nums.size() < 1 ) return 0;
    
            if (nums[0] == val && nums.size() >1) {
                temp = nums[1];
                nums[1] = nums[0];
                nums[0] = temp;
            }
    
            for (int i=1; i < nums.size(); i++){
                if (nums[i] != val){
                    int j = i;
                    while(j>0){
                        temp = nums[j-1];
                        nums[j-1] = nums[j];
                        nums[j] = temp; 
                        j--;
                    }
                }
            }
            // temp = nums.size() -1;
            int z = nums.size() -1;
            while(!nums.empty() && nums[z] == val ){
                nums.pop_back();
                z--;
                size--;
            }
            return nums.size();
        }
    };