class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle;
        while(columnNumber>0){
            columnNumber -= 1;
            columnTitle = char(65 + (columnNumber) % 26) + columnTitle;
            columnNumber /= 26;
        }
        return columnTitle;
    }
};
