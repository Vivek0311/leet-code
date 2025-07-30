class Solution {
public:
    string toLowerCase(string s) {
        string tolowercase = "";
        for(int i=0; i<s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                tolowercase += char((int)s[i] + 32);
            }
            else{
                tolowercase += char(s[i]);
            }
        }
        return tolowercase;
    }
};
