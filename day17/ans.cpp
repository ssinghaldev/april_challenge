class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    //cout << "I am Here!!\n";
                    count += 1;
                    makeNeighboursZero(grid, i , j);
                }
            }
        }
        
        return count;
    }
    
    void makeNeighboursZero(vector<vector<char>>& grid, int i, int j) {
        //Base condition is implicit when all the neighbours are zero
        
        if(i != grid.size() - 1 && grid[i+1][j] == '1') {
            grid[i+1][j] = '0';
            makeNeighboursZero(grid, i + 1, j);
        }
        
        if(i != 0 && grid[i - 1][j] == '1') {
            grid[i - 1][j] = '0';
            makeNeighboursZero(grid, i - 1, j);
        }
        
        if(j != grid[i].size() - 1 && grid[i][j + 1] == '1') {
            grid[i][j + 1] = '0';
            makeNeighboursZero(grid, i, j + 1);
        }
        
        if(j != 0 && grid[i][j - 1] == '1') {
            grid[i][j - 1] = '0';
            makeNeighboursZero(grid, i, j - 1);
        }
        
        return;
    }
};
