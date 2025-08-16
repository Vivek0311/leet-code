class Solution {
public:
    string largestGoodInteger(string num) {
        char max = '\0';
        int i = 0, j = i + 2;
        while (j < num.length()) {
            if (num[i] == num[i + 1] && num[i + 1] == num[j]) {
                if (num[i] > max) {
                    max = num[i];
                }
            }
            i++;
            j++;
        }
        return (max == '\0') ? "" : string(3, max);
    }
};
