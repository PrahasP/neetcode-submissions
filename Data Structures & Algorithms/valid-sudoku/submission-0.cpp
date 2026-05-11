class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, columns;
        map<pair<int, int>, unordered_set<char>> squares;

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if(board[r][c] == '.'){
                    continue;
                }

                pair<int, int> squareIndex = {r / 3, c / 3};

                // if this is inside of our row, column, or anywhere on the board, we can't do this.
                if(rows[r].count(board[r][c]) || columns[c].count(board[r][c]) || squares[squareIndex].count(board[r][c])){
                    return false;
                }

                rows[r].insert(board[r][c]);
                columns[c].insert(board[r][c]);
                squares[squareIndex].insert(board[r][c]);
            }
        }

        return true;
    }
};
