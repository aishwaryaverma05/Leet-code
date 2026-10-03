class Solution {
public:
    int solve(vector<int>& ans, int n, vector<int>& dp){
        if(n<0) return 0;

        if(dp[n]!=-1) return dp[n];

        int pick = ans[n] + solve(ans, n-2, dp);
        int notpick = solve(ans, n-1, dp);

        return dp[n] = max(pick, notpick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];

        vector<int> first, last;
        for(int i=0; i<n; i++){
            if(i != n-1) first.push_back(nums[i]);
            if(i != 0) last.push_back(nums[i]);
        }

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        return max(solve(first, n-2, dp1), solve(last, n-2, dp2));
    }
};