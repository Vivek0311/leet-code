class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> parenthesis;

        function<void(string, int, int)> backtrack =
            [&](string current, int openCount, int closeCount) {
                if (openCount == n && closeCount == n) {
                    parenthesis.push_back(current);
                    return;
                }

                if (openCount < n) {
                    backtrack(current + '(', openCount + 1, closeCount);
                }

                if (closeCount < openCount) {
                    backtrack(current + ')', openCount, closeCount + 1);
                }
            };

        backtrack("", 0, 0);
        return parenthesis;
    }
};
