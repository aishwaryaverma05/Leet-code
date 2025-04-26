class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // string x=s;
        // string y=t;
        // for(int i=0;i<x.size();i++){
        //     if(x[i]=='#'){
        //         x.pop_back();
        //         x.pop_back();
        //     }
        // }
        // for(int i=0;i<y.size();i++){
        //     if(y[i]=='#'){
        //         y.pop_back();
        //         y.pop_back();
        //     }
        // }
        // if(x==y){return true;}
        // else{return false;}
        stack<char> st1;
        stack<char>st2;
        for(char ch:s){
            if(!st1.empty() && ch=='#'){
                st1.pop();
            }
            else if(ch!='#'){
                st1.push(ch);
            }
        }
        for(char ch:t){
            if(!st2.empty() && ch=='#'){
                st2.pop();
            }
            else if(ch!='#'){
                st2.push(ch);
            }
        }
        string temp="";
        string result="";
        while(!st1.empty()){
            temp+=st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            result+=st2.top();
            st2.pop();
        }
        reverse(temp.begin(), temp.end());
        reverse(result.begin(), result.end());
        return(temp==result);
    }
};