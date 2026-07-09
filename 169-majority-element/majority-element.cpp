class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n=nums.size()/2;
        for(int num:nums){
            mpp[num]++;
        }
        for(auto it:mpp){
            if(it.second>n){
                return it.first;
            }
        }
        return nums[n];
    }
};