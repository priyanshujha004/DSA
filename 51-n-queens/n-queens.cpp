class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n){
        for(int idx = 0; idx < n; idx++){
            if(board[row][idx]=='Q') return false;
        }
        for(int jdx = 0; jdx < n; jdx++){
            if(board[jdx][col]=='Q') return false;
        }
        for(int idx = row, jdx = col; idx>=0 && jdx>=0; idx--, jdx--){
            if(board[idx][jdx]=='Q') return false;
        }
        for(int idx = row, jdx = col; idx>=0 && jdx<n; idx--, jdx++){
            if(board[idx][jdx]=='Q') return false;
        }
        return true;
    }
    void nQueens(vector<string> &board, vector<vector<string>> &ans, int row, int n){
        if(n==row){
            ans.push_back({board});
            return;
        }
        for(int col=0; col<n; col++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                nQueens(board,ans,row+1,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.')); 
        vector<vector<string>> ans;
        nQueens(board,ans,0,n);
        return ans;
    }
};