class Solution {
private:
    int N,M;
    vector<vector<bool>> visited;
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0 , 0, 1,-1};

    bool isValid(int r, int c, vector<vector<char>>& grid){
        if ( r < 0 || r >= N || c < 0 || c >= M) return false;
        if (visited[r][c]) return false;
        if (grid[r][c] == '0') return false;
        return true;
    }

    void dfs(int r, int c, vector<vector<char>>& grid){
        visited[r][c] = true;
        
        for (int i = 0 ; i < 4 ; i++){
            int nr = r + dx[i];
            int nc = c + dy[i];
            if (isValid(nr, nc, grid)){
                dfs (nr, nc, grid);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        N = grid.size();
        M = grid[0].size();
        visited.assign(N, vector<bool>(M, false));

        int ans = 0;

        for (int i = 0 ; i < N ; i++){
            for (int j = 0 ; j < M ; j++){
                if (!visited[i][j] && grid[i][j] == '1'){
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }

        return ans;
    }

    


};
