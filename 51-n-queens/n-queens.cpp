class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n){
        for(int idx=0; idx<n; idx++){ // Checking No Queens on Same Row
            if(board[row][idx]=='Q') return false;
        }
        for(int jdx=0; jdx<n; jdx++){ // Checking No Queens on Same Column
            if(board[jdx][col]=='Q') return false;
        }
        for(int pdx=row,qdx=col; pdx>=0 && qdx>=0; pdx--,qdx--){ // Checking No Queens on Left Diagonal
            if(board[pdx][qdx]=='Q') return false;
        }
        for(int rdx=row,sdx=col; rdx>=0 && sdx<n; rdx--,sdx++){ // Checking No Queens on Right Diagonal
            if(board[rdx][sdx]=='Q') return false;
        }
        return true;
    }
    void nQueens(vector<string> &board, vector<vector<string>> &answer, int row, int n){
        if(row==n){
            answer.push_back({board});
            return;
        }
        for(int col = 0; col < n; col++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                nQueens(board,answer,row+1,n);
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> answer;
        nQueens(board,answer,0,n);
        return answer;
    }
};