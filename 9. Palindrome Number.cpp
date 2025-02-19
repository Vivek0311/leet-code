class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> result;
        bool flag;
        if (x < 0)
            return false;
        if (x >= 0 && x < 10)
            return true;
        if (x % 10 == 0)
            return false;

        int xy = x;
        while (xy > 0)
        {
            //  while(xy > 10 && x%10 != 0){
            result.emplace_back(xy % 10);
            xy = xy / 10;
        }
        // result.emplace_back(xy);
        long long sum = 0;
        for (int h = 0; h < result.size(); h++)
        {
            sum = (sum * 10) + result[h];
        }
        if (sum == x)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        return flag;
    }
};