class Solution {
public:
    void bfs(int start,vector<vector<int>>& isConnected,vector<int>& vis){
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while(!q.empty()){
            int n=q.front();
            q.pop();
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[n][j] == 1 && vis[j] == 0){
                    vis[j]=1;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int prov=0;
        int n=isConnected.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                bfs(i,isConnected,vis);
                prov++;
            }
        }
        return prov;
    }
};