class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfnumbers;
        bool flag = true;
        while (left <= right) {
            int left_copy = left;
            flag = true;
            while (left_copy > 0) {
                int digit = left_copy % 10;
                if (digit == 0 || left % (digit) != 0) {
                    flag = false;
                    break;
                }
                left_copy /= 10;
            }
            if (flag) {
                selfnumbers.push_back(left);
            }
            left++;
        }
        return selfnumbers;
    }
};
