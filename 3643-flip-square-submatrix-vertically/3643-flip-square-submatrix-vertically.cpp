class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int sRow = x;
        int eRow = x+k-1;
        int sCol =y;
        int eCol =y+k-1;
        for(int i =sRow;i<=eRow;i++){
            for(int j = sCol;j<=eCol;j++){
                swap(grid[i][j],grid[eRow][j]);
            }
            eRow--;
        }
        return grid;
    }
};