class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int sz=s.size();
        // for(int i=0;i<sz;i++){
        //     for(int j=i+1;j<=sz;j++){
        //         string sub=s.substr(i,j-i);
        //         unordered_map<char,int>mpp;
        //         for(char ch:sub){
        //             mpp[ch]++;
        //         }
        //         auto min_ele=*mpp.begin();
        //         auto max_ele=*mpp.begin();
        //         for(auto &pair:mpp){
        //             if(pair.second<min_ele.second){min_ele=pair;}
        //             if(pair.second>max_ele.second){max_ele=pair;}
        //         }
        //         sum=max_ele.second-min_ele.second;
        //     }
        // }
        // return sum;
        for(int i=0;i<sz;i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<sz;j++){
                mpp[s[j]]++;
                int min_freq=INT_MAX,max_freq=INT_MIN;
                for(auto &pair : mpp) {
                    min_freq = min(min_freq, pair.second);
                    max_freq = max(max_freq, pair.second);
                }
                sum += (max_freq - min_freq);
            }
        }
        return sum;
    }
};