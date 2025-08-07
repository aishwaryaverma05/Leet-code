class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(),boxTypes.end(), [](const vector<int>& a,const vector<int>& b){
            return a[1]> b[1];
        });
        
        int units=0;

        for(auto &pair: boxTypes){
            int boxtaken=min(pair[0],truckSize);
            units+=boxtaken*pair[1];

            truckSize-=boxtaken;

            if(truckSize==0) break;
        }
        return units;
    }
};