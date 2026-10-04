class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int color) {
        if (image[sr][sc] == color)
            return image;
        int n = image.size();
        int m = image[0].size();
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        queue<pair<int, int>> q;
        int original=image[sr][sc];
        q.push({sr, sc});
        image[sr][sc] = color;
        while (!q.empty()) {

            auto [r, c] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    image[nr][nc] ==original) {
                    image[nr][nc] = color;
                    q.push({nr, nc});
                }
            }
        }
        return image;
    }
};