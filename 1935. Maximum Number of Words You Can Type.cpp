class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        stringstream ss(text);
        string word;

        if (brokenLetters.empty()) {
            stringstream temp(text);
            int wordCount = 0;
            while (temp >> word) {
                ++wordCount;
            }
            return wordCount;
        }

        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());

        int count = 0;

        while (ss >> word) {
            bool skip = false;
            for (char ch : word) {
                if (broken.find(ch) != broken.end()) {
                    skip = true;
                    break;
                }
            }
            if (skip) {
                continue;
            } else {
                count++;
            }
        }
        return count;
    }
};
