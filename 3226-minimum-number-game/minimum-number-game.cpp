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

        // ANOTHER METHOD
        // sort(nums.begin(), nums.end());
        // vector<int> result;
    
        // for (int i = 0; i < nums.size(); i += 2) {
        // // Push the larger then smaller in each pair
        //     result.push_back(nums[i+1]);
        //     result.push_back(nums[i]);
        // }
    
        // return result;


        // Heap
        priority_queue<int,vector<int>,greater<int>>minHeap(nums.begin(),nums.end());

        vector<int>arr;
        while(!minHeap.empty()){
            int alice=minHeap.top();minHeap.pop();
            int Bob=minHeap.top();minHeap.pop();

            arr.push_back(Bob);
            arr.push_back(alice);
        }
        return arr;
    }
};