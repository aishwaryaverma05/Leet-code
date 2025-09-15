class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap(stones.begin(),stones.end());
        while(maxheap.size()>1){
            int top1=maxheap.top();maxheap.pop();
            int top2=maxheap.top();maxheap.pop();
            if(top1!=top2){
                maxheap.push(top1-top2);
            }
        }
        return maxheap.empty() ? 0 : maxheap.top(); 
    }
};