class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0, t_sum = 0;
        for (int i=0; i<s.length(); i++){
            s_sum += s[i];
        }
        for (int j=0; j<t.length(); j++){
            t_sum += t[j];
        }
        return char(t_sum - s_sum);
    }
};
