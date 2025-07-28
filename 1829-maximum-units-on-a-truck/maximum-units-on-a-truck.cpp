class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort boxes in descending order of units per box
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });
        
        int units = 0;
        
        for (const auto& box : boxTypes) {
            int boxesTaken = min(box[0], truckSize);  
            units += boxesTaken * box[1];
            truckSize -= boxesTaken;
            
            if (truckSize == 0) break;  
        }
        
        return units;
    }
};