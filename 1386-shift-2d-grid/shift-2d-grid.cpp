class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(); int n = grid[0].size();
        if(k==m*n) return grid;

        vector<int> arr;
        for(int idx=0; idx<m; idx++){
            for(int jdx=0; jdx<n; jdx++){
                arr.push_back(grid[idx][jdx]);
            }
        }
        k=k%arr.size();
        vector<int> temp;
        int kdx = arr.size()-1;
        int x = k;
        while(x>0){
            temp.push_back(arr[kdx]);
            kdx--; x--;
        }
        int pdx = temp.size()-1;
        int qdx = 0;
        for(int idx=0; idx<m; idx++){
            for(int jdx=0; jdx<n; jdx++){
                if(k>0){
                    grid[idx][jdx]=temp[pdx];
                    pdx--;
                    k--;
                }
                else{
                    grid[idx][jdx]=arr[qdx];
                    qdx++;
                }
            }
        }
        return grid;
        // int ndx = 0;
        // for(int idx=k+1; idx<m; idx++){
        //     for(int jdx=k+1; jdx<n; jdx++){
        //         grid[i][j]=arr[ndx];
        //         ndx++;
        //     }
        // }        
    }
};