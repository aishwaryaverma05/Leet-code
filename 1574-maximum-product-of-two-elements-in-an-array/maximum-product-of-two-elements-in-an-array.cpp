class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //brute 
        // int maxi=INT_MIN;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int max_ele=(nums[i]-1)*(nums[j]-1);
        //         maxi=max(maxi,max_ele);
        //     }
        // }
        // return maxi;


        // heap
        priority_queue<int> max_heap;

        for(int num:nums){
            max_heap.push(num);
        }

        int first_max=max_heap.top();
        max_heap.pop();
        int second_max=max_heap.top();
        max_heap.pop();

        return (first_max-1)*(second_max-1);
    }
};