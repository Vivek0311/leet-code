class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        // char swap;
        while(i<=j){
            // swap = s[i];
            // s[i] = s[j];
            // s[j] = swap;
            swap(s[i++], s[j--]);
            // i++;
            // j--; 
        }
    }
};
