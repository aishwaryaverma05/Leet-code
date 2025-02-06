class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mpp;
        for(char ch:sentence){
            mpp[ch]++;
        }
        if(mpp.size()!=26){
            return false;
        }
        return true;
    }
};