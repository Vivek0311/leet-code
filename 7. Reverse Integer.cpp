#include <math.h>
class Solution {
public:
    int reverse(int x) {
        vector<int> arr;
        long y = x;
        long sum = 0;
        if (x>-10 && x<10) return x;
        if (x>=INT_MAX || x <= INT_MIN) return 0;
        if (x<=-10) {
            x = abs(x);
        }
        while(x>=10){
            arr.emplace(arr.begin(), (x%10));
            x = x / 10;
        }
        if (x<10){
            arr.emplace(arr.begin(), x);
        }
        for (int i=arr.size() -1; i>=0; i--){
            sum += arr[i] * pow(10,i);
            if (sum > INT_MAX){
                return 0;
            }
        }
        if ( y <= -10){
            sum *= -1;
        }
        return sum;
    }
};
