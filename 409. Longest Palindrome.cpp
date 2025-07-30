class Solution {
public:
    int longestPalindrome(string s) {
        int longest_palindrome = 0;
        vector<int> freq(52,0);
        for(int i=0; i<s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z') freq[s[i] - 'A']++;
            else freq[s[i] - 'a' + 26]++;
        }
        bool odd_flag = false;
        for(int j=0; j<freq.size(); j++){
            longest_palindrome += (freq[j]/2) * 2;
            if (freq[j] %2 == 1) odd_flag = true;
        }
        if (odd_flag) longest_palindrome +=1;
        return longest_palindrome; 
    }
};
