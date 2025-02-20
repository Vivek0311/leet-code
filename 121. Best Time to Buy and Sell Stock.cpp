class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int max = 0;
    //     for ( int i=0; i<prices.size(); i++){
    //         for ( int j = i+1; j<prices.size(); j++ ){
    //             int diff = prices[j] - prices[i];
    //             if (diff > max){
    //                 max = diff;
    //             }
    //         }
    //     }
    //     return max;
    // }
     int maxProfit(vector<int>& prices) {
        if ( prices.size() <2) return 0;
        int min_price = prices[0];
        int max_price = 0;
        for (int i=1; i<prices.size(); i++){
            min_price = min(min_price, prices[i]);
            if ( prices[i] > min_price ){
                max_price = max( max_price, prices[i] - min_price);
            }
        }
        return max_price;
    }
};
