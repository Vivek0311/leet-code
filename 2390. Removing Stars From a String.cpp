class Solution {
public:
    string removeStars(string s) {
        stack<char> store;
        string result = "";
        for(int i=0; i<s.length(); i++){
            if ( s[i] != '*') store.push(s[i]); 
            else store.pop();
        }
        while( !store.empty()){
            char ch = store.top();
            result.insert(result.begin(), ch);
            store.pop();
        }
        return result;
    }
};
