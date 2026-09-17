class Solution {
public:
    bool solve(vector<int>& nums,int k,int ind,vector<vector<int>>& dp){
        if(k==0)return true;
        if(ind==0) return (k==nums[0]);

        if(dp[ind][k]!=-1) return dp[ind][k];
        int not_take=solve(nums,k,ind-1,dp);
        int take=(nums[ind]<=k) ? solve(nums,k-nums[ind],ind-1,dp): false;

        return dp[ind][k]=take | not_take;
    }
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int num:nums){
            total+=num;
        }
        if(total%2!=0)return false;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>((total/2)+1,-1));
        return solve(nums,total/2,n-1,dp);
    }
};