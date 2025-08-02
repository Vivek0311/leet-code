class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for (int a = 1; a < arr.size(); a++) {
            int curr_diff = arr[a] - arr[a - 1];
            if (curr_diff < min_diff) {
                min_diff = curr_diff;
            }
        }
        vector<vector<int>> abs_diff;
        for (int i = 1; i < arr.size(); i++) {
            if ((arr[i] - arr[i - 1]) == min_diff) {
                abs_diff.push_back({arr[i - 1], arr[i]});
            }
        }
        return abs_diff;
    }
};
