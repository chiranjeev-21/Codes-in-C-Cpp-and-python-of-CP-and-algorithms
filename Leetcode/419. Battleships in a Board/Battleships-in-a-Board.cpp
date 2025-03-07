class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        /**
        * One-Pass Constant-Space solution. Input board is not modified
        *
        * Going over all cells, we can count only those that are the \last\ cell of the
        * battleship. Last cell will be defined as the most bottom-right cell. We can
        * check for last cells by only counting cells that do not have an 'X' to the
        * right and do not have an 'X' below them.
        *
        * Time Complexity: O(M * N)
        *
        * Space Complexity: O(1)
        *
        * M = Number of rows in the board. N = Number of columns in the board.
        */
        if (board.empty() || board[0].empty()) {
            return 0;
        }
        int rows = board.size();
        int cols = board[0].size();
        int count = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 'X' &&(j == cols - 1 || board[i][j + 1] == '.') &&(i == rows - 1 || board[i + 1][j] == '.')) {
                    count++;
                }
            }
        }
        
        return count;
    }
};