class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char ch:s){
            if(!st.empty() && ch==st.top()){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string new_st="";
        while(!st.empty()){
            new_st+=st.top();
            st.pop();
        }
        reverse(new_st.begin(),new_st.end());
        return new_st;
        
    }
};