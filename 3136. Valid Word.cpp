class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3)
            return false;

        bool vowel = false;
        bool consonant = false;

        for (int i = 0; i < word.length(); i++) {
            word[i] = toupper(word[i]);
            if (!((word[i] >= '0' && word[i] <= '9') ||
                  (word[i] >= 'A' && word[i] <= 'Z'))) {
                return false;
            }
            if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
                word[i] == 'O' || word[i] == 'U') {
                vowel = true;
            }
            if (!(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
                  word[i] == 'O' || word[i] == 'U') &&
                (word[i] >= 'A' && word[i] <= 'Z')) {
                consonant = true;
            }
        }
        return (vowel && consonant);
    }
};
