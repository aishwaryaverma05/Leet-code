class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int prev=nums[1]-nums[0];
        int len=1;
        if(prev!=0) len=2;
        for(int i=2;i<nums.size();i++){
            int curr=nums[i]-nums[i-1];

            if((prev<=0 && curr>0) || (prev>=0 && curr<0)){
                len++;
                prev =curr;
            }
        }
    return len;
    }
};