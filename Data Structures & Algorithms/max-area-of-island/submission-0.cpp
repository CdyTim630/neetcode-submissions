class Solution {
private:
    int N,M;
    int ans;
    int max_ans;
    vector<vector<bool>> visited;
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0 , 0, 1,-1};

    bool isValid(int r, int c, vector<vector<int>>& grid){
        if ( r < 0 || r >= N || c < 0 || c >= M) return false;
        if (visited[r][c]) return false;
        if (grid[r][c] == 0) return false;
        return true;
    }

    void dfs(int r, int c, vector<vector<int>>& grid, int& ans){
        visited[r][c] = true;
        
        for (int i = 0 ; i < 4 ; i++){
            int nr = r + dx[i];
            int nc = c + dy[i];
            if (isValid(nr, nc, grid)){
                ans++;
                dfs (nr, nc, grid, ans);
            }
        }

    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        N = grid.size();
        M = grid[0].size();
        visited.assign(N, vector<bool>(M, false));

        max_ans = 0;

        for (int i = 0 ; i < N ; i++){
            for (int j = 0 ; j < M ; j++){
                ans = 0;
                if (!visited[i][j] && grid[i][j] == 1){
                    ans++;
                    dfs(i,j,grid,ans);
                    max_ans = max(ans, max_ans);
                }
            }
        }

        return max_ans;
    }
};
