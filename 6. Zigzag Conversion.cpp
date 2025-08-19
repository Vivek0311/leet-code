class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        vector<string> rowstring(numRows);
        int track_index = 0;
        bool move = true;
        int len = s.length();
        string result;
        for (int i = 0; i < len; i++) {
            if (track_index == numRows - 1) {
                move = false;
            } else if (track_index == 0) {
                move = true;
            }
            rowstring[track_index] += s[i];
            if (move) {
                track_index++;
            } else {
                track_index--;
            }
        }
        for (auto x : rowstring) {
            result += x;
        }
        return result;
    }
};
