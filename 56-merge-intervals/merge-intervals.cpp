class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]<b[0];
        });
        if(intervals.size()==1) return intervals;
        vector<vector<int>>vec;
        // int start=intervals[0][0];
        // int end=intervals[0][1];
        // for(int i=1;i<intervals.size();i++){
        //     if(intervals[i][0]<=end){
        //         vec.push_back({start,intervals[i][1]});
        //     }
        //     else{
        //         vec.push_back({intervals[i][0],intervals[i][1]});
        //     }
        //     start=vec[i-1][0];
        //     end=vec[i-1][1];
        // }
        // return vec;

        vector<int> temp=intervals[0];
        for(auto pair:intervals){
            if(pair[0]<=temp[1]){
                temp[1]=max(temp[1],pair[1]);
            }
            else{
                vec.push_back(temp);
                temp=pair;
            }
        }
        vec.push_back(temp);
        return vec;

    }
};