class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i=0;
        for(int num:pushed){
            st.push(num);

        while(!st.empty() && st.top()==popped[i]){
                st.pop();
                i++;
            }
        }
        if(st.empty()){return true;}
        else{return false;}
    }
};