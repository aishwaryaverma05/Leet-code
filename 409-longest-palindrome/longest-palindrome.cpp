class Solution {
public:
    int longestPalindrome(string s) {
        int len=0;
        // hash map
        unordered_map<char,int>freq;
        for(char ch:s) freq[ch]++;

        bool isOdd=false;

        for(auto [ch,fr]:freq){
            if(fr%2==0)len+=fr;

            else{
                isOdd=true;
                len+=fr-1;
            }
        }
    return (isOdd) ? len+1 : len ;
    }
};