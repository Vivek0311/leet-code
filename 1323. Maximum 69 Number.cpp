class Solution {
public:
    int maximum69Number(int num) {
        string number = to_string(num);
        int len = number.length() - 1, i = 0;
        while (i <= len) {
            if (number[i] == '6') {
                number[i] = '9';
                break;
            }
            i++;
        }
        while (i < len) {
        }
        return stoi(number);
    }
};
