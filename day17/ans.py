class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        count = 0
        
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == '1':
                    # Make itself and all neighbours zero in BFS fashion
                    grid[i][j] = '0'
                    
                    q = deque()
                    q.append((i,j))
                    while q:
                        r, c = q.popleft()
                        
                        if r != len(grid) - 1 and grid[r+1][c] == '1':
                            grid[r+1][c] = '0'
                            q.append((r+1, c))
                        
                        if r != 0 and grid[r-1][c] == '1':
                            grid[r-1][c] = '0'
                            q.append((r-1, c))

                        if c != len(grid[r]) - 1 and grid[r][c+1] == '1':
                            grid[r][c+1] = '0'
                            q.append((r, c+1))
                        
                        if c != 0 and grid[r][c - 1] == '1':
                            grid[r][c-1] = '0'
                            q.append((r, c-1))
                    
                    #increment island count
                    count += 1
        
        return count    
