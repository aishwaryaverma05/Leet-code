class Solution {
public:
    vector<int> splitversion(const string& version){
        vector<int> result;
        stringstream ss(version);
        string word;
        while(getline(ss, word, '.')){
            result.push_back(stoi(word));
        }
        return result;
    }
    int compareVersion(string version1, string version2) {
        vector<int> v1=splitversion(version1);
        vector<int> v2=splitversion(version2);
        int maxsize=max(v1.size(),v2.size());
        for(int i=0;i<maxsize;i++){
            int num1=(i<v1.size()) ? v1[i] :0;
            int num2=(i<v2.size()) ? v2[i] :0;
            if(num1<num2){return -1;};
            if(num1>num2){return 1;};
        }

        return 0;
    }
};