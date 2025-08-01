class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1 || n % 2 == 1 && n != 1)
            return false;
        while (n != 1) {
            n = n / 2;
            if (n != 1 && n % 2 == 1)
                return false;
        }
        return true;
    }
};
