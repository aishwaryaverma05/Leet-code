class Solution {
public:
    long long element(int n,int r){
        long long a=1;
        for(int i=0;i<r;i++){
            a=a*(n-i);
            a=a/(i+1);
        }
        return a;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i=0;i<numRows;i++){
            vector<int>ans;
            for(int j=0;j<i+1;j++){
                ans.push_back(element(i,j));
            }
            res.push_back(ans);
        }
        return res;
    }
};