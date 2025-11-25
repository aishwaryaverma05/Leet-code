class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int num=1%k;
        int len=1;
        if(k%2==0 || k%5==0)return -1;
        while(num!=0){
            num=(num*10+1)%k;
            len++;
        }
        return len;
    }
};