class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j, int m, int n) {
        // Boundary check
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
            return;

        // Mark visited safe cells
        board[i][j] = '#';

        // Explore 4 directions
        dfs(board, i + 1, j, m, n);
        dfs(board, i - 1, j, m, n);
        dfs(board, i, j + 1, m, n);
        dfs(board, i, j - 1, m, n);
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        // Step 1: Mark all border connected 'O'
        
        // First and last column
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O')
                dfs(board, i, 0, m, n);

            if (board[i][n - 1] == 'O')
                dfs(board, i, n - 1, m, n);
        }

        // First and last row
        for (int j = 0; j < n; j++) {
            if (board[0][j] == 'O')
                dfs(board, 0, j, m, n);

            if (board[m - 1][j] == 'O')
                dfs(board, m - 1, j, m, n);
        }

        // Step 2: Convert surrounded 'O' into 'X'
        // and restore '#' back to 'O'
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (board[i][j] == 'O')
                    board[i][j] = 'X';

                else if (board[i][j] == '#')
                    board[i][j] = 'O';
            }


        }

        
    }
};