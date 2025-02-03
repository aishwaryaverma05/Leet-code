class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // int result;
        // for(int i=left;i<=right;i++){
        //     result&=i;
        // }
        // return result;
        int result=0;
        while(left<right){
            left>>=1;
            right>>=1;
            result++;
        }
        return left<<result;
    }
};