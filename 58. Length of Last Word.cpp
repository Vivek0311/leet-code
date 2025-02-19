class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 0) return 0;
        int count = 1;
        for (int i = s.length()-1; i>=0; i--){
            
            if (s[i] == ' ' && count>1){
                break;
            }
            else if (s[i] == ' '){
                continue;
            }
            else{
                count++;
            }
        }
        return count -1;
    }
};
