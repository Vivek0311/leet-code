class Solution {
public:
    string toHex(int num) {
        unsigned int n = num;
        if (n == 0) return "0";
        string hexdecimal = "";
        while(n>0){
            if (n % 16 > 9 && n % 16 < 16 ) hexdecimal = char((n % 16) + 87) + hexdecimal; 
            else hexdecimal = char((n % 16) + 48) + hexdecimal;
            n /= 16;
        }
        return hexdecimal;
    }
};
