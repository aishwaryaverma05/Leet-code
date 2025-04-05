class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int close_sum=nums[0]+nums[1]+nums[2];

        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;

            while(left<right){
                int curr=nums[i]+nums[left]+nums[right];
                if(abs(curr-target)< abs(close_sum-target)){
                    close_sum=curr;
                }

                if(curr<target){
                    left++;
                }
                else if(curr>target){
                    right--;
                }
                else{
                    return target;
                }
            }
        }
        return close_sum;
    }
};