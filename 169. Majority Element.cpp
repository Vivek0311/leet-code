// Used Boyer-Moore Voting Algorithm
/* Algorithm Steps:
Initialize:

Select a candidate (candidate = nums[0]) and set a counter (count = 1).
Iterate through the array:

If the current element matches the candidate, increment count.
If the current element is different, decrement count.
If count becomes zero, update the candidate to the current element and reset count = 1.
Final Candidate:

At the end of the iteration, the candidate will be the majority element (since it appears more than n/2 times, it cannot be completely "canceled out").
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int cand = nums[0];
        for (int i=1; i< nums.size(); i++) {
            if (nums[i] == cand && count!=0){
                count++;
            }
            else if (count == 0 ){
                cand = nums[i];
                count++;
            }
            else{
                count--;
            }
        }
        return cand;
    }
};
