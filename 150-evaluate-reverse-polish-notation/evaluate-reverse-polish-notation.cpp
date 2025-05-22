class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(const string&ch:tokens){
            if(ch=="+"||ch=="-"||ch=="*"||ch=="/"){
                int b=st.top(); st.pop();
                int a= st.top();st.pop();
                if(ch=="+") st.push(a+b);
                if(ch=="-") st.push(a-b);
                if(ch=="*") st.push(a*b);
                if(ch=="/") st.push(a/b);
            }
            else{
                int num=stoi(ch);
                st.push(num);
            }
        }
        return st.top();
    }
};