class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length() -1;
        int res = 0;
        long j = 1;
        for(int i=len; i>=0; i--){
            int pos = columnTitle[i] - 'A' + 1;
            res += pos * j;
            j *= 26;
        }
        return res;
    }
};
