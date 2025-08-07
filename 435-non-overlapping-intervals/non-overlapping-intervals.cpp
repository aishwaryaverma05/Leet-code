class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[] (const vector<int>& a,const vector<int>& b){
            return a[1]<b[1];
        });

        // int removed=0;
        // for(auto i=1;i<intervals.size();i++){
        //     if(intervals[i][0]>=intervals[i-1][1]){
        //         continue;
        //     }
        //     else{
        //         removed++;
        //     }
        // }
        // return removed;

        int cnt=1;  // maan ke chal rahe hai ki first meeting toh ho hi rahi hai
        int endTime=intervals[0][1];
        int sz=intervals.size();
        for(int i=1;i<sz;i++){
            if(intervals[i][0]>=endTime){
                cnt++;
                endTime=intervals[i][1];
            }
        }

        return sz-cnt;
    }
};