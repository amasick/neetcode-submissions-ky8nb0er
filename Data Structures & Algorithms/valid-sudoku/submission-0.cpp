class Solution {
   public:
    bool helper(vector<int>&temp,vector<vector<char>> & board, int i, int j) {
        if (board[i][j] == '.') return true;

        int digit = board[i][j] - '0';
        if (temp[digit]) return false;

        temp[digit] = 1;
        return true;
    }

    bool isValidRow(vector<vector<char>>& board, int i) {
        vector<int> temp(10, 0);
        for (int j = 0; j < 9; j++) {
            if(!helper(temp,board,i,j))return false;
          
            }
        
        return true;
    }
    

    bool isValidCol(vector<vector<char>>& board, int j) {
        vector<int> temp(10, 0);
        for (int i = 0; i < 9; i++) {
           if(!helper(temp,board,i,j))return false;
        }
        return true;
    }

    bool isValidBox(vector<vector<char>>& board, int i, int j) {
        int startRow = (i / 3) * 3;
        int startCol = (j / 3) * 3;
        vector<int> temp(10, 0);

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if(!helper(temp,board,i,j))return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
            {
                if(!isValidCol(board,j) or !isValidRow(board,i) or !isValidBox(board,i,j))return false;
            }
        }
        return true;
    }
};
