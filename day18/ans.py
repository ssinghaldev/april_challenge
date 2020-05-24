class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        mat = [[0 for j in range(len(grid[0]))] for i in range(len(grid))]
        
        mat[0][0] = grid[0][0]
        for c in range(1, len(grid[0])):
            mat[0][c] += grid[0][c] + mat[0][c-1]
        
        for r in range(1, len(grid)):
            mat[r][0] += grid[r][0] + mat[r-1][0]
        
        for i in range(1, len(grid)):
            for j in range(1, len(grid[i])):
                mat[i][j] = grid[i][j] + min(mat[i-1][j], mat[i][j-1])
                
        return mat[len(grid) - 1][len(grid[0]) - 1]
                
        
