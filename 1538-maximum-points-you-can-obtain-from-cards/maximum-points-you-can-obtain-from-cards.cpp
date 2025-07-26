class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // int n=cardPoints.size()-1;
        // int sum1=0,sum2=0;
        // for(int i=0;i<k;i++){
        //     sum1+=cardPoints[i];
        // }
        // for(int j=n;j>k;j--){
        //     sum2+=cardPoints[j];
        // }
        // return max(sum1,sum2);
        int n = cardPoints.size();
        int lsum = 0, rsum = 0, maxsum = 0;
        
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;
        
        int rindex = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rindex--];
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};