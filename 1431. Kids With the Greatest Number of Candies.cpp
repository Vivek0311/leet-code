class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int greatest = 0;
        for ( int i=0; i<candies.size(); i++){
            if ( candies[i] > greatest) greatest = candies[i];
        }
        for (int i=0; i<candies.size(); i++){
            if ( (candies[i] + extraCandies) >= greatest){
                result.emplace_back(true);
            }
            else{
                result.emplace_back(false);
            }
        }
        return result; 
    }
};
