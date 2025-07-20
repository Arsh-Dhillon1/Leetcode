class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        queue<pair<int, int>> q;

        if (grid[0][0] == 1 || grid[r - 1][c - 1] == 1) {
            return -1;
        }

        if (grid[0][0] == 0) {
            q.push({0, 0});
        }
        grid[0][0] = 1; 

        int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
        int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

        while (q.size() > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                pair<int, int> temp = q.front();
                q.pop();

                if (temp.first == r - 1 && temp.second == c - 1) {
                    return grid[temp.first][temp.second]; 
                }

                for (int j = 0; j < 8; j++) {
                    int x = temp.first + dx[j];
                    int y = temp.second + dy[j];
                    if (x >= 0 && y >= 0 && x < r && y < c && grid[x][y] == 0) {
                        grid[x][y] = grid[temp.first][temp.second] + 1;
                        q.push({x, y});
                    }
                }
            }
        }

        return -1;
    }
};
