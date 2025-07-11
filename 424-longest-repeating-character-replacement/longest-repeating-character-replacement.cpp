class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int maxlen=0;
        int maxfreq=0;
        int n=s.length();
        for(int right=0;right<n;right++){
            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);

            while((right-left+1)-maxfreq>k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};