class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_map<int, int> freq;

        for (int i = 0; i < nums2.size(); i++) {
            freq[nums2[i]]++;
        }
        for (int j = 0; j < nums1.size(); j++) {
            if (freq.find(nums1[j]) != freq.end() && freq[nums1[j]] > 0) {
                intersection.push_back(nums1[j]);
                freq[nums1[j]]--;
            }
        }
        return intersection;
    }
};
