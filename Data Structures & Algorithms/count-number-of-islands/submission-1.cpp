class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    islands++;
                    DFS(grid, i, j);
                }
            }
        }

        return islands;
    }

    void DFS(vector<vector<char>>& grid, int x, int y){
        if(x >= grid.size() || x < 0 || y >= grid[0].size() || y < 0 || grid[x][y] == '0'){
            return;
        }
        
        grid[x][y] = '0';

        DFS(grid, x+1, y);
        DFS(grid, x-1, y);
        DFS(grid, x, y+1);
        DFS(grid, x, y-1);
    }
};
