class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag;
        int n = word.length();
        if (n == 1) return true;

        if ( isupper(word[0]) && isupper(word[1]) ) {
            for(int i=2; i<word.length(); i++){
                if(!isupper(word[i])) return false;
            }
        }
        else {
            for(int i=1; i<word.length(); i++){
                if(isupper(word[i])) return false;
            }
        }
        return true;
    }
};
