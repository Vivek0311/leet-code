class Solution {
public:
    string addBinary(string a, string b) {
        string binaryresult;
        int i = a.length() -1, j = b.length() -1, carry = 0;
        while(i >=0 || j >=0 || carry){
            int bitA = (i>=0) ? a[i] - '0' : 0; 
            int bitB = (j>=0) ? b[j] - '0' : 0;
            
            int sum = bitA + bitB + carry;
            binaryresult = char((sum%2) + '0') + binaryresult;
            carry = sum / 2;
            i--;
            j--;
        }
        return binaryresult;
    }
};
