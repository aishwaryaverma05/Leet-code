class Solution {
public:
    int result(int n,vector<int> &dp){
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=result(n-1,dp)+result(n-2,dp);
    }
    int climbStairs(int n) {
        // using memoization 
        vector<int> dp(n+1,-1);
        return result(n,dp);
    }
};