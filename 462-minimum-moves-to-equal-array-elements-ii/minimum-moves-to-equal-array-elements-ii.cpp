class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int median = n%2==0 ? (nums[n/2]+nums[n/2-1])/2 : nums[(n)/2];
        int sum=0;
        for(int num:nums){
            sum+=abs(median-num);
        }

        return sum;
    }
};