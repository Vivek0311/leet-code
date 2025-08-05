class Solution {
public:
    string reverseWords(string s) {
        if (s.length() == 1)
            return s;
        string reverse_result = "";
        istringstream iss(s);
        string word;
        while (iss >> word) {
            int i = 0;
            int j = word.length() - 1;
            cout << word << endl;
            cout << word.length() - 1 << endl;
            while (i < j) {
                swap(word[i], word[j]);
                i++;
                j--;
            }
            reverse_result += word;
            reverse_result += " ";
        }
        if (!reverse_result.empty() && reverse_result.back() == ' ')
            reverse_result.pop_back();

        return reverse_result;
    }
};
