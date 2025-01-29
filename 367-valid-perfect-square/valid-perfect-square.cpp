class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        if(num<0)return false;
        long long start=0;
        long long end=num;
        while(start<end){
            long long mid=start+(end-start)/2;
            long long sq=mid*mid;
            if(sq==num){
                return true;
            }
            else if(sq>num){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};