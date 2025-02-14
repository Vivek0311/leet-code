class Solution {
    public:
        double merge(vector<int>& nums1, vector<int>& nums2){
            vector<int> sorted;
            int i=0, j=0;
            while(i < nums1.size() && j<nums2.size()){
                if(nums1[i] <= nums2[j] && i < nums1.size()){
                    sorted.push_back(nums1[i]);
                    i++;
                }
                else if(nums2[j] <= nums1[i] && j < nums2.size()){
                    sorted.emplace_back(nums2[j]);
                    j++;
                }
            }
            while (i < nums1.size()){
                sorted.emplace_back(nums1[i]);
                i++;
            }
            while (j < nums2.size()){
                sorted.emplace_back(nums2[j]);
                j++;
            }
            if (sorted.size() %2 == 0){
                int len = sorted.size();
                return (sorted[(len / 2)] + sorted[(len / 2) - 1]) / 2.0;
            }
            else{
                return sorted[(sorted.size()/2)];
            }
        }
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            return merge(nums1, nums2);     
        }
    };