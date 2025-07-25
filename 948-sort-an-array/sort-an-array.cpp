class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>minHeap;

        for(int num:nums){
            minHeap.push(num);
        }
        vector<int> vec;
        while(!minHeap.empty()){
            vec.push_back(minHeap.top());
            minHeap.pop();
        }
        return vec;
    }
};