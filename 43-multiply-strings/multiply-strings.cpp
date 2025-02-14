class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        vector<int> v(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            int a=num1[i]-'0';
            for(int j=num2.size()-1;j>=0;j--){
                int b=num2[j]-'0';
                int mul=a*b+v[i+j+1];
                v[i+j+1]=mul%10;
                v[i+j]+=mul/10;
            }
        }     
        string str="";
        for(int i=0;i<v.size();i++){
            if(str.empty() && v[i]==0)continue;
            str+=to_string(v[i]);
        }
        return str;
    }
};