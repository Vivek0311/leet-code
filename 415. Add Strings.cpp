class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum;
        int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
        while(i>=0 || j>=0 || carry){
            int bit1 = (i>=0) ? num1[i--] - '0' : 0;
            int bit2 = (j>=0) ? num2[j--] - '0' : 0;

            int total = bit1 + bit2 + carry;
            carry = total / 10;
            sum = char((total % 10) + '0') + sum;
        }
        return sum;
    }
};
