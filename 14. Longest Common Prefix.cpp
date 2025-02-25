class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() <= 1) return strs[0];
        sort(strs.begin(), strs.end());
        if (strs[0] == "") return "";
        string one = strs[0];
        string last = strs[strs.size() -1];
        int i = 0;
        int len = strs[strs.size()-1].length();
        while(one[i] == last[i] && i<len){
            i++;
        }
        return one.substr(0, i);
    }
};