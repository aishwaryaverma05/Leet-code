class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double sum=0;
        // for(int i=0;i<k;i++){
        //     sum+=nums[i];
        // }
        // double maxsum=sum;

        // for(int j=k;j<nums.size();j++){
        //     sum+=nums[j]-nums[j-k];
        //     maxsum=max(maxsum,sum);
        // }
        
        // return maxsum/k;

        double sum=0;
        int left=0;
        double maxsum=INT_MIN;

        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            
            while(right-left+1 == k){
                maxsum=max(maxsum,sum);
                sum-=nums[left];
                left++;
            }
        }
        return maxsum/k;
    }
};