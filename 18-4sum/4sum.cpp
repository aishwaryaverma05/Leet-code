class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // set<vector<int>> st;
        // for(long long i=0;i<nums.size();i++){
        //     for(long long j=i+1;j<nums.size();j++){
        //         for(long long k=j+1;k<nums.size();k++){
        //             for(long long l=k+1;l<nums.size();l++){
        //                 long long ele=nums[i]+nums[j];
        //                 ele+=nums[k];
        //                 ele+=nums[l];
        //                 if(ele==target){
        //                     vector<int>num={nums[i],nums[j],nums[k],nums[l]};
        //                     sort(num.begin(),num.end());
        //                     st.insert(num);
        //                 }
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> result(st.begin(),st.end());
        // return result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum =
                        (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};