class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //     unordered_map<char,int>mapIndex;
        //     int i=0;
        //     int maxlen=0;
        //     for(int j=0;j<s.size();j++){
        //         char current=s[j];
        //         if(mapIndex.find(current) != mapIndex.end() &&
        //         mapIndex[current]>=i){
        //             i=mapIndex[current]+1;
        //         }
        //         mapIndex[current]=j;
        //         maxlen=max(maxlen,j-i+1);
        //     }
        // return maxlen;
        int n = s.length();
        int left = 0;
        int maxlen = 0;
        unordered_set<char>charset;
        for(int right=0;right<n;right++){
            while(charset.find(s[right])!= charset.end()){
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};