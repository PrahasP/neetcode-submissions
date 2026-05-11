class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }

        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int row, int column, int letter) {
        if (letter == word.size()) {
            return true;
        }

        if(row < 0 || column < 0 || row >= board.size() || column >= board[0].size() || board[row][column] != word[letter] || board[row][column] == '#'){
            return false;
        }

        board[row][column] = '#';

        bool answer = dfs(board, word, row + 1, column, letter + 1) || dfs(board, word, row - 1, column, letter + 1) || dfs(board, word, row, column + 1, letter + 1) || dfs(board, word, row, column - 1, letter + 1); 

        board[row][column] = word[letter];
        return answer;
    }
};
