class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> common_elements;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j] &&
                    find(common_elements.begin(), common_elements.end(),
                         nums1[i]) == common_elements.end()) {
                    common_elements.push_back(nums1[i]);
                    break;
                }
            }
        }
        return common_elements;
    }
};
