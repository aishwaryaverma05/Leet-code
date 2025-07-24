class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // brute
        // 1.sort the array
        // sort(nums.begin(),nums.end());
        // 2.swap 
        // for(int i=0;i<nums.size();i+=2){
        //     swap(nums[i],nums[i+1]);
        // }

        // return nums;


        sort(nums.begin(), nums.end());
        vector<int> result;
    
        for (int i = 0; i < nums.size(); i += 2) {
        // Push the larger then smaller in each pair
            result.push_back(nums[i+1]);
            result.push_back(nums[i]);
        }
    
        return result;
    }
};