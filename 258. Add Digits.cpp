class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        int result = num;
        while (result / 10 > 0) {
            result = (result % 10) + (result / 10);
        }
        return result;
    }
};
