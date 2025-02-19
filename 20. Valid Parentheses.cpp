class Solution {
    public:
        bool isValid(string s) {
            bool flag = false;
            if (s.length() == 1) return false;
            stack<int> parentheses;
            unordered_map<char, char> paren_map = {{'(', ')'}, {'[',']'},{'{','}'}};
            // if (s[0] != paren_map[s[0]])
            //     parentheses.push(s[0]);
            // for (int i=1; i<s.length(); i++){
            //     if((s[i] == paren_map[s[i-1]] || paren_map[parentheses.top()] == s[i]) && !s.empty() ){
            //         parentheses.pop();
            //     }
            //     else{
            //         parentheses.push(s[i]);
            //     }
            // }
            // if (parentheses.empty()){
            //     flag = true;
            // }
            // else{
            //     flag = false;
            // }
            // return flag;
            for (char c: s){
                if (paren_map.count(c)){
                    parentheses.push(c);
                }else{
                    if (parentheses.empty() || paren_map[parentheses.top()] != c){
                        return false;
                    }
                    parentheses.pop();
                }
            }
            return parentheses.empty();
        }
    };