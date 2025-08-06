class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int sz=fb.size();
        int cnt=0;
        for(int i=0;i<sz;i++){
            if(fb[i]==0){
                bool left= (i==0) || (fb[i-1]==0);
                bool right= (i==sz-1) || (fb[i+1]==0);

                if(left && right){
                    fb[i]=1;
                    cnt++;
                }
            }
        }
        return (cnt>=n);
    }
};