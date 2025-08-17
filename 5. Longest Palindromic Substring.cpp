class Solution {

public:
    int findLP(int l, int r, string s) {
        int len = s.length();
        while (l >= 0 && r < len) {
            if (s[l] == s[r]) {
                l--;
                r++;
            } else {
                break;
            }
        }
        int currLen = r - l - 1;
        return currLen;
    }
    string longestPalindrome(string s) {
        int len = s.length();

        if (len == 1)
            return s;

        int start = 0, lenLP = 0;
        for (int i = 0; i < len; i++) {
            int lenOdd = findLP(i, i, s);
            int lenEven = findLP(i, i + 1, s);
            int currLen = max(lenOdd, lenEven);

            if (currLen > lenLP) {
                lenLP = currLen;
                start = i - (currLen - 1) / 2;
            }
        }
        return s.substr(start, lenLP);
    }
};
