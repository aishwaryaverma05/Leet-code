class Solution {
public:
    int solve(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i>m || j>n) return 1e9;
        if(i==m && j==n) return grid[m][n];
        if(dp[i][j]!=-1) return dp[i][j];
        int down=grid[i][j]+solve(i+1,j,m,n,grid,dp);
        int right=grid[i][j]+solve(i,j+1,m,n,grid,dp);

        return dp[i][j]= min(down,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ways=solve(0,0,m-1,n-1,grid,dp);
        return ways;
    }
};