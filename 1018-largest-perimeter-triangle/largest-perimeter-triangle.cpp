class Solution {
public:
    // int areaCal(int peri,int s){
    //     int area=s*(s-nums[0])*(s-nums[1])*(s-nums[2]);
    //     int sq_ar=sqrt(area);
    //     if(sq_ar==0){
    //         return 0;
    //     }
    //     else{
    //         return peri;
    //     }
    // }
    // int largestPerimeter(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     if(nums.size()==3){
    //         int peri=nums[0]+nums[1]+nums[2];
    //         int s=peri/2;
    //         areaCal(peri,s)
    //     }else{
    //         for(int i=0;i<nums.size();i++){
    //             for(int j=i+1;j<nums.size();j++){
    //                 for(int k=j+1;k<nums.size();k++){
    //                     if(nums[i]+nums[j]+nums[k])
    //                 }
    //             }
    //         }
    //     }
    // }
    int largestPerimeter(vector<int>& nums){
        sort(nums.begin(),nums.end(),greater<int>());
        int peri;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                peri=nums[i]+nums[i+1]+nums[i+2];
                return peri;
            }
        }
        return 0;
    }
};