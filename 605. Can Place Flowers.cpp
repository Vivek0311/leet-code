class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool flag = false;
        int count = 0;
        if (flowerbed.size() ==0 ) return false;
        if (flowerbed.size() == 1 ){ 
            if (flowerbed[0] == 1 && n==1 ){
                return false;
            }
            return true;
        }
        // if ( flowerbed.size() < 2) return false;
        int curr = 0;
        int prev = 0;
        int forw = flowerbed[curr + 1];
        while( curr < flowerbed.size() ){
            if ( flowerbed[curr] != 1 && forw != 1 && prev != 1){
                flowerbed[curr] = 1;
                count++;
            }
            // curr +=2;
            curr++;
            prev = flowerbed[curr-1];
            forw = (curr+1) >= flowerbed.size() ? 0 : forw = flowerbed[curr+1];
        }

        if (count >= n){
            flag = true;
        }
        return flag;
    }
};
