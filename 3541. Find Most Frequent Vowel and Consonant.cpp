class Solution {
public:
    int maxFreqSum(string s) {
        int vowelCount = 0, consonantCount = 0;
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        for (const auto& [key, value] : freq) {
            if (key == 'a' || key == 'e' || key == 'i' || key == 'o' ||
                key == 'u') {
                vowelCount = max(vowelCount, value);
            } else {
                consonantCount = max(consonantCount, value);
            }
        }
        return vowelCount + consonantCount;
    }
};
