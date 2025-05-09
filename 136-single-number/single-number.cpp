class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto pair : freq) {
            if (pair.second == 1)
                return pair.first;
        }
        return -1; 
        // int sz=nums.size();
        // if(sz==1){
        //     return nums.front();
        // }
        // int result=0;
        // for(int i=0;i<sz;i++){
        //     result=result^nums[i];
        // }
        // return result;
    }
};