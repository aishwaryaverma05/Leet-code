class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string result=s+s;
        if(result.contains(goal)){
            return true;
        }
        else{return false;}
    }
};