class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (k==0) return;
        int d=k%n;
        int temp[k];
        int j=0;
        for(int i=n-d;i<n;i++){
            temp[j++]=nums[i];
        }
        for(int i=n-1;i>=d;i--){
            nums[i]=nums[i-d];
        }
        
        for(int i=0;i<d;i++){
            nums[i]=temp[i];
        }
    }
};