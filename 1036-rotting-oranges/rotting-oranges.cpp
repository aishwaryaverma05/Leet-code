class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        if(fresh==0)return 0;
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        int time=0;
        while(!q.empty()){
            int sz=q.size();
            bool rott=false;
            while(sz--){
                auto [r,c]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int nr=r+dr[k];
                    int nc=c+dc[k];

                    if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        fresh--;
                        rott=true;
                    }
                }
            }
            if(rott)time++;
        }
        return (fresh==0) ? time : -1;
    }
};