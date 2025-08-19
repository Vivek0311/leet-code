class Solution {
public:
    int myAtoi(string s) {
        int sLen = s.length(), i = 0, sign = 1;
        long num = 0;
        while (i < sLen && s[i] == ' ') {
            i++;
        }
        if (i < sLen && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < sLen && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            num = num * 10 + digit;
            i++;
        }
        return sign * num;
    }
};
