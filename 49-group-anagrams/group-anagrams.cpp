class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(int i=0;i<strs.size();i++){
            string s= strs[i];

            sort(s.begin(),s.end());
            mpp[s].push_back(strs[i]);
        }

        vector<vector<string>> result(mpp.size());
        int index=0;
        for(auto ch: mpp){
            auto temp=ch.second;

            for(auto str:temp){
                result[index].push_back(str);
            }
            index ++;
        }
        return result;
    }
};