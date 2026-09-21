class Solution {
public:
    static bool compare(vector<int>& a,vector<int>& b){
        if(a[1]<b[1])return true;
        else return false;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int len=intervals.size();
        int cnt=1;
        int endtime=intervals[0][1];

        for(int i=1;i<len;i++){
            if(intervals[i][0]>=endtime){
                cnt++;
                endtime=intervals[i][1];
            }
        }
        return len-cnt;
    }
};