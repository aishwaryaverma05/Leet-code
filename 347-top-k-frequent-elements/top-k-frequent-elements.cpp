class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // creating hash map for frequency 
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        // creating min heap in descending order
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>minHeap;


        // inserting number in hashmap to heap minimum
        for(auto& [num,count]: freq){
            minHeap.push({count,num});

            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        // converting min heap to hash map 

        vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
    return result;

    }
};