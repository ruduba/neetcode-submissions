class Solution {
public:
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, 1, -1, 0};

    void isHouse(vector<vector<char>> &grid, vector<vector<bool>> &vis, int x, int y){
        vis[x][y] = true;

        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx<grid.size() && nx >= 0 && ny<grid[0].size() && ny >= 0){ 
                    if(!vis[nx][ny] && grid[nx][ny] == '1'){
                        isHouse(grid, vis, nx, ny);
                    }
                }
            }
        }
    }


    int numIslands(vector<vector<char>>& grid) {


        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));

        int num = 0;

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    num++;
                    isHouse(grid, vis, i, j);
                } 
            }
        }

        return num;
    }
};
