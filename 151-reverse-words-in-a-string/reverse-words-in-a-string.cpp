class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        vector<string> vec;
        while(str>>word){
            vec.push_back(word);
        }

        string result;
        for(int i=vec.size()-1;i>=0;i--){
            result +=vec[i];
            if(i>0){
                result+=" ";
            }
        }
        return result;
    }
};