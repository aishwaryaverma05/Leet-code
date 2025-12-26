class Solution {
public:
    bool solve(int ind, vector<int>& nums, int sum, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(ind == 0) return nums[0] == sum;

        if(dp[ind][sum] != -1)
            return dp[ind][sum];

        bool notpick = solve(ind - 1, nums, sum, dp);
        bool pick = false;

        if(nums[ind] <= sum){
            pick = solve(ind - 1, nums, sum - nums[ind], dp);
        }

        return dp[ind][sum] = pick || notpick;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;

        for(int x : nums)
            totalsum += x;

        if(totalsum % 2 != 0) return false;

        int sums = totalsum / 2;
        vector<vector<int>> dp(n, vector<int>(sums + 1, -1));

        return solve(n - 1, nums, sums, dp);
    }
};
