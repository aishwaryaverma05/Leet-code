class Solution {
public:
    static bool compare(vector<int>& a , vector<int>& b){
        if(a[0]<b[0])return true;
        else return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        vector<vector<int>>vec;
        int end=intervals[0][1];
        vec.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=end){
                vec.back()[1]=max(vec.back()[1],intervals[i][1]);
                end=vec.back()[1];
            }
            else{
                vec.push_back(intervals[i]);
                end = intervals[i][1];
            }
        }
        return vec;
    }
};