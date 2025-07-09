class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mapIndex;
        int i=0;
        int maxlen=0;
        for(int j=0;j<s.size();j++){
            char current=s[j];
            if(mapIndex.find(current) != mapIndex.end() && mapIndex[current]>=i){
                i=mapIndex[current]+1;
            }
            mapIndex[current]=j;
            maxlen=max(maxlen,j-i+1);
        }
    return maxlen;
    }
};