class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n-1;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==0 && k!=-1){
                nums1[i]=nums2[k--];
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};