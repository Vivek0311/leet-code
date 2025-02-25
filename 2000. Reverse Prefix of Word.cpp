class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<int> st;
        int counter = 0;
        bool found = false;
        for (int i=0; i<word.length(); i++){
            st.push(word[i]);
            counter++;
            if (ch == word[i]){
                found = true;
                break;
            }
        }
        if (found){
            for (int j=0; j<counter; j++){
                word[j] = st.top();
                st.pop();
            }
        }
        return word;
    }
};
