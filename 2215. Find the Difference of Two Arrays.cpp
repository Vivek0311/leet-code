class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> distinctDifference;
        unordered_set<int> nums1set(nums1.begin(), nums1.end());
        unordered_set<int> nums2set(nums2.begin(), nums2.end());
        vector<int> nums1List;
        vector<int> nums2List;

        for (int num1 : nums1set) {
            if (!nums2set.count(num1)) {
                nums1List.push_back(num1);
            }
        }
        for (int num2 : nums2set) {
            if (!nums1set.count(num2)) {
                nums2List.push_back(num2);
            }
        }
        distinctDifference.push_back(nums1List);
        distinctDifference.push_back(nums2List);
        return distinctDifference;
    }
};
