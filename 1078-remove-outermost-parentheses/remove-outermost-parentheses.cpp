class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack<int>st;
        int depth=0;
        string ans="";
        for(char ch:s){
            if(ch=='('){
                if(depth>0){
                    ans+=ch;
                }
                // st.push(ch);
                depth++;
            }
            else{
                // st.pop();
                depth--;
                if(depth>0){
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};