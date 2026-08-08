class Solution {
public:
    bool isSafe(vector<vector<int>>& grid, int row, int col, int r, int c){
        int diffR = abs(r-row); int diffC = abs(c-col);
        if((diffR==2 && diffC==1) || (diffR==1 && diffC==2)) return true;
        return false;
    }
    bool KnightTour(vector<vector<int>>& grid, int row, int col, int val, int n){
        if(grid[row][col]==n-1){
            return true;
        }
        for(int idx = 0; idx < grid.size(); idx++){
            for(int jdx = 0; jdx < grid[0].size(); jdx++){
                if(isSafe(grid,row,col,idx,jdx) && grid[idx][jdx] == val + 1){
                    return KnightTour(grid,idx,jdx,val+1,n);
                }
            }
        }
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return false;
        int len = grid.size();
        return KnightTour(grid,0,0,0,len*len);
    }
};