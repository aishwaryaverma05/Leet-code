class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int sz1=nums1.size();
        int sz2=nums2.size();
        set<int>st;
        for(int i=0;i<sz1;i++){
            for(int j=0;j<sz2;j++){
                if(nums1[i]==nums2[j]){
                    st.insert(nums1[i]);
                }
            }
        }
        vector<int>vec(st.begin(),st.end());
        return vec;
    }
};