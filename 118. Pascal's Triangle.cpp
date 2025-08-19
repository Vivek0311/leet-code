class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for (int i = 0; i < numRows; i++) {
            vector<int> temp_triangle(i + 1, 1);
            for (int j = 1; j < i; j++) {
                temp_triangle[j] =
                    pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
            pascalTriangle.push_back(temp_triangle);
        }
        return pascalTriangle;
    }
};
