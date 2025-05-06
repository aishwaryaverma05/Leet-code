class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      int sz=prices.size();
      vector<int> answer(sz);
      for(int i=0;i<sz;i++){
        int discount=0;
        for(int j=i+1;j<sz;j++){
            if(prices[i]>=prices[j]){
                discount=prices[j];
                break;
            }
        }
        answer[i]=prices[i]-discount;
      }  
      return answer;
    }
};