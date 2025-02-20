class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
    unordered_set<string>st(bannedWords.begin(),bannedWords.end());
    int cnt =0;
    for(auto it:message) {
        if(st.find(it)!=st.end()) 
        cnt++;
     }  
    return cnt>1;     
    }
};