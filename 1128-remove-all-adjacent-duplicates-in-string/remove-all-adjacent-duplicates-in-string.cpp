class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char>st;
        string temp="";
        for(char ch:s){
            if(!temp.empty() && temp.back()==ch){
                temp.pop_back();
            }
            else{temp.push_back(ch);}
        }
        return temp;
        
    }
};