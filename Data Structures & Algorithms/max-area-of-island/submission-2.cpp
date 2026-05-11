class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, currentIslandArea(grid, i, j));
                }
            }
        }

        return maxArea;
    }

    int currentIslandArea(vector<vector<int>>& grid, int x, int y){
        if (x < 0 || x > (int) grid.size() - 1 || y < 0 || y > (int) grid[0].size() - 1 || grid[x][y] != 1){
            return 0;
        }

        grid[x][y] = 0;

        return 1 + currentIslandArea(grid, x+1, y) + currentIslandArea(grid, x-1, y) + currentIslandArea(grid, x, y+1) + currentIslandArea(grid, x, y-1);
    }
};
