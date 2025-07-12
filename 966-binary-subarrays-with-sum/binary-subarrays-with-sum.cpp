class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // brute force
        // int total=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //         }
        //         if(sum==goal){
        //             total++;
        //         }
        //     }
        // }
        // return total;
        int left = 0;
        int sum = 0;
        int total = 0;
        int n = nums.size();
        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (left < right && sum > goal) {
                sum -= nums[left];
                left++;
            }

            if (sum == goal) {
                total++;

            int temp_left = left;
            while (temp_left < right && nums[temp_left] == 0) {
                total++; 
                temp_left++;
            }
        }
    }
    return total;
    }
};