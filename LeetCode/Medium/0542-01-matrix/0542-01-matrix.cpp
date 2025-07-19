class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                } else {
                    grid[i][j] = 1e9;
                }
            }
        }
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        while (q.size() > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                pair<int, int> temp = q.front();
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int x = temp.first + dx[j];
                    int y = temp.second + dy[j];
                    if (x >= 0 && y >= 0 && x < r && y < c && grid[x][y] > 1 + grid[temp.first][temp.second]) {
                        grid[x][y] = 1 + grid[temp.first][temp.second];
                        q.push({x, y});
                    }
                }
            }
        }
        return grid;
    }
};