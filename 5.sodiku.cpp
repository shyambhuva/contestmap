class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char n = board[r][c];
            if (n == '.') continue;
            
            int b = (r / 3) * 3 + (c / 3);
            
            if (rows[r].count(n) || cols[c].count(n) || boxes[b].count(n)) {
                return false;
            }
            
            rows[r].insert(n);
            cols[c].insert(n);
            boxes[b].insert(n);
        }
    }
    
    return true;
    }
};
