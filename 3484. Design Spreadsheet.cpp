class Spreadsheet {
    vector<vector<int>> grid;

public:
    Spreadsheet(int rows) {
        grid = vector<vector<int>>(rows, vector<int>(26, 0));
    }

    void setCell(string cell, int value) {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1)) - 1;
        grid[row][col] = value;
    }

    void resetCell(string cell) {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1)) - 1;
        grid[row][col] = 0;
    }

    int getValue(string formula) {
        if (formula[0] == '=') {
            formula = formula.substr(1);
        }

        size_t pos = formula.find("+");
        string left = formula.substr(0, pos);
        string right = formula.substr(pos + 1);

        int value1, value2;
        if (isalpha(left[0])) {
            int coll = left[0] - 'A';
            int rowl = stoi(left.substr(1)) - 1;
            value1 = grid[rowl][coll];
        } else {
            value1 = stoi(left);
        }
        if (isalpha(right[0])) {
            int colr = right[0] - 'A';
            int rowr = stoi(right.substr(1)) - 1;
            value2 = grid[rowr][colr];
        } else {
            value2 = stoi(right);
        }

        return value1 + value2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
