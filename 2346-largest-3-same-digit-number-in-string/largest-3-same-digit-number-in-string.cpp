class Solution {
public:
    string largestGoodInteger(string num) {
        // int maxi;
        int maxi=-1;
        for(int i=0;i<=num.size()-3;i++){
            string s= num.substr(i,3);
            if((s[0]==s[1]) && (s[1]==s[2])){
                int n=stoi(s);
                maxi=max(maxi,n);
            }
        }
        // sort(vec.begin(),vec.end(),greater<int>());
        if(maxi==-1){
            return "";
        }
        else if(maxi==0){
            return "000";
        }
        else{
            return to_string(maxi);
        }
    }
};