class Solution {
public:
    void bfs(int start,vector<vector<int>>& isConnected,vector<int>& vis){
        queue<int>q;
        vis[start]=1;
        q.push(start);
        while(!q.empty()){
            int n=q.front();
            q.pop();
            for(int i=0;i<isConnected.size();i++){
                if(isConnected[n][i]==1 && vis[i]==0){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }

    }
    void dfs(int start,vector<vector<int>>& isConnected,vector<int>& vis){
        vis[start]=1;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[start][i]==1 && vis[i]==0){
                vis[i]==1;
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // adj mat given 
        int V=isConnected.size();
        int cnt=0;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,isConnected,vis);
                cnt++;
            }
        }
        return cnt;
    }
};