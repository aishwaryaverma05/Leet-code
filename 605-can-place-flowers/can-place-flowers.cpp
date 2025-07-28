class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int sz=flowerbed.size();
        // for(int i=1;i<sz-1;i++){
        //     if(flowerbed[i]==1) i++;
            
        //     else{  //i=0
        //         if((flowerbed[i-1]==0) && (flowerbed[i+1]==0)){
        //             flowerbed[i]=1;
        //             n--;
        //         }
        //         else if(flowerbed[i]==0 && flowerbed[i-1]==0){
        //             flowerbed[i]=1;
        //             n--;
        //         }
        //     }
        // }
        // return n==0 ? true:false;

        int sz = flowerbed.size();
        for (int i = 0; i < sz && n > 0; i++) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == sz - 1) || (flowerbed[i + 1] == 0);
                
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1; 
                    n--;              
                    i++;             
                }
            } else {
                i++; 
            }
        }
        return n == 0;
    }
};