class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream words_stream(s);
        string word;
        vector<string> words;
        unordered_map<char, string> char_string;
        unordered_map<string, char> string_char;
        while (words_stream >> word){
            words.push_back(word);
        }

        if (pattern.size() != words.size()) return false;

        for(int i=0; i<words.size(); i++){
            if (char_string.find(pattern[i]) == char_string.end()){
                if (string_char.find(words[i]) != string_char.end()) {
                    return false;
                }
                char_string[pattern[i]] = words[i];
                string_char[words[i]] = pattern[i];
            } else {
                if (char_string[pattern[i]] != words[i]) return false;
            }
        }
        return true;
    }
};
