class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> keep;
        int i = 0, j = 0, lenj = nums2.size();
        int leni = nums1.size() - lenj;
        while(i<leni && j<lenj){
            if (nums1[i] < nums2[j]){
                keep.push_back(nums1[i]);
                i++;
            }
            else{
                keep.push_back(nums2[j]);
                j++;
            }
        }
        while(i<leni){
            keep.push_back(nums1[i]);
            i++;
        }
        while(j<lenj){
            keep.push_back(nums2[j]);
            j++;
        }
        for (int k=0; k<nums1.size(); k++){
            nums1[k] = keep[k];
        }
    }
};
