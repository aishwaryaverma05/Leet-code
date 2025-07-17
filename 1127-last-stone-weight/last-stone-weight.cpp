class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // brute
        // while(stones.size()>1){
        //     sort(stones.begin(),stones.end(),greater<int>());

        //     int x=stones[0];
        //     int y=stones[1];

        //     // stones.erase(stones.begin(),stones.end()+2);
        //     stones.erase(stones.begin(), stones.begin() + 2);

        //     if(x!=y){
        //         // stones.push_back(abs(x-y));
        //         stones.push_back(abs(x - y));
        //     }
        // }
        // return stones.empty()? 0:stones[0];



        // optimal
        priority_queue<int> maxHeap(stones.begin(),stones.end());

        while(maxHeap.size()>1){
            
            int x=maxHeap.top();maxHeap.pop();
            int y=maxHeap.top();maxHeap.pop();

            if(x!=y){
                maxHeap.push(abs(x-y));
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};