class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //brute 
        int maxi=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int max_ele=(nums[i]-1)*(nums[j]-1);
                maxi=max(maxi,max_ele);
            }
        }
        return maxi;
    }
};