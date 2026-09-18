class Solution {
public:
    int solve(int ind,vector<int>& coins, int amount,vector<vector<int>>& dp){
        if(ind==0){
            if(amount%coins[0]==0)return amount/coins[0];
            else return 1e9;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int not_take=solve(ind-1,coins,amount,dp);
        int take=(coins[ind]<=amount) ? 1+solve(ind,coins,amount-coins[ind],dp) : 1e9;

        return dp[ind][amount]= min(take,not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=solve(n-1,coins,amount,dp);
        return (ans>=1e9) ? -1:ans;
    }
};