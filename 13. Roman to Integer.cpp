class Solution {
    public:
        int romanToInt(string s) {
            int new_s = 0 ;
            int sum_1 = 0;
            unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C',100}, {'D',500}, {'M', 1000}};
            if (s.length() == 1) return roman[s[0]];
            if (s.length() == 2) {
                if ( roman[s[1]] <= roman[s[0]] ){
                    new_s = roman[s[1]] + roman[s[0]];
                }
                else if (roman[s[1]] >= roman[s[0]]){
                    new_s = roman[s[1]] - roman[s[0]];
                }
                return new_s;
            }
            for ( int i=s.length()-1; i>0; i-- ){
                if ( roman[s[i]] <= roman[s[i-1]] ){
                    new_s += roman[s[i]];
                }
                else if (roman[s[i]] >= roman[s[i-1]]){
                    sum_1 = roman[s[i]] - roman[s[i-1]];
                    new_s += sum_1;
                    i--;
                } 
            }
            if (s.length()> 2){
                if (roman[s[1]] <= roman[s[0]]){
                    new_s += roman[s[0]];
                }
                // else if (roman[s[1]] >= roman[s[0]]){
                //         // new_s -= roman[s[0]];
                //         // sum_1 = roman[s[1]] - roman[s[0]];
                //         // new_s += sum_1;
                //         new_s -= roman[s[0]];
                // } 
            }
            return new_s;
        }
    };