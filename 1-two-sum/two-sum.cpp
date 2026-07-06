class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int ele;
            ele=target-nums[i];
            if(mpp.find(ele)==mpp.end()){
                mpp[nums[i]]=i;
            }
            else{
                return {mpp[ele],i};
            }
        }
        return {};
    }
};