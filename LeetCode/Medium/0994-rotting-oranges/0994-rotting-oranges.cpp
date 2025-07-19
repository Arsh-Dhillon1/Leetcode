class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        int fresh = 0, rotten = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                } else if (grid[i][j] == 2) {
                    rotten++;
                    q.push({i, j});
                }
            }
        }

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        int min = 0;

        while (q.size() > 0) {
            int rot_at_single_minute = q.size();

            for (int i = 0; i < rot_at_single_minute; i++) {
                pair<int, int> temp = q.front();
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int x = temp.first + dx[i];
                    int y = temp.second + dy[i];

                    if (x >= 0 && y >= 0 && x < r && y < c && grid[x][y] == 1) {
                        grid[x][y] = 2;
                        q.push({x, y});
                        fresh--;
                    }
                }
            }
            if (q.size() > 0)
                min++;
        }

        if (fresh == 0)
            return min;

        return -1;
    }
};