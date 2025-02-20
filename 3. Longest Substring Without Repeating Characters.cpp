class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() <=1 ) return s.length();
        unordered_map<char, int> hash;
        int l = 0;
        int r = 0;
        int max_len = 0;
        int len = 0;
        while ( r< s.length() && l<=r){
            if ( ! (hash.count(s[r]) && hash[s[r]] >=l) ){
                len +=1;
                hash[s[r]] = r;
            }
            else if (hash.count(s[r]) == 1 && hash[s[r]] >=l){
                l = hash[s[r]] + 1;
                hash[s[r]] = r;
                len = r-l+1;
            }
            r++;
            max_len = max(len, max_len);
        }
        return max_len;
    }
};
