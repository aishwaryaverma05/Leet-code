class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int sz=nums.size();
        vector<int>vec(sz,-1);
        for(int i=0;i<sz;i++){
            for(int j=1;j<sz;j++){
                int idx=(i+j)%sz;
                if(nums[idx]>nums[i]){
                    vec[i]=nums[idx];
                    break;
                }
            }
        }
        return vec;
    }
};