class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0;

        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)five++;
            else if(bills[i]==10){
                if(five==0)return false;
                else{
                    five--;
                    ten++;
                }
            }
            else{
                if(ten>=1 && five>=1){
                    five--;ten--;twenty++;
                }
                else if(five>=3){
                    five=five-3;
                    twenty++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};