class Solution {
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

public:
    string sortVowels(string s) {
        int len = s.length();
        if (len == 1) {
            return s;
        }
        string collect, result;
        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                collect += s[i];
            }
        }

        if (collect.empty()) {
            return s;
        }

        sort(collect.begin(), collect.end());

        for (int j = 0; j < s.length(); j++) {
            if (isVowel(s[j])) {
                result += collect[k];
                k++;
            } else {
                result += s[j];
            }
        }
        return result;
    }
};
