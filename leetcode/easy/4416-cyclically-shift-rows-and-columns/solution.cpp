class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0 ; i<n ; i++){
            // int k= rowShift[i]%n;
            vector<int>temp(n);
            int s = rowShift[i]%n;
            for(int j=0 ; j<n ; j++){
                temp[j]= grid[i][(j+s)%n];
            }
            grid[i]= temp;
        }
        for(int j =0 ;j<n ; j++){
            vector<int>temp(n);
             int s = colShift[j]%n;
            for(int i=0; i<n ; i++)
            {
                temp[i]= grid[(i+s)%n][j];
                
            }  
            for(int i=0;i<n ; i++){
                grid[i][j]=temp[i];
            }
        }
        return grid;
    }
};