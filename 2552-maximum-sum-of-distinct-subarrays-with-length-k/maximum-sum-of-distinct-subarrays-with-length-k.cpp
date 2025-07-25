class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // unordered_set<int> st(nums.begin(),nums.end());
        // int sum=0;
        // int maxsum=INT_MIN;
        // int left=0;
        // for(int right=0;right<st.size();right++){
        //     sum+=st[right];

        //     if(right-left+1 == k){
        //         maxsum=max(maxsum,sum);
        //         sum-=st[left];
        //         left++;
        //     }
        // }
        // return (maxsum==INT_MIN)? 0: maxsum;

        unordered_map<int,int> freq;
        long long maxsum=0,sum=0;
        int left=0;

        for(int right=0;right<nums.size();right++){
            freq[nums[right]]++;
            sum+=nums[right];
             
            while(freq[nums[right]]>1){
                freq[nums[left]]--;
                sum-=nums[left];
                left++;
            }

            if(right-left+1 == k){
                maxsum=max(maxsum,sum);
                freq[nums[left]]--;
                sum-=nums[left];
                left++;
            }
        }
        return maxsum;
    }
};