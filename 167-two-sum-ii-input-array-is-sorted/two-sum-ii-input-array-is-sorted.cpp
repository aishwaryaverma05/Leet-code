class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int>vec;
        // for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //         if(numbers[i]+numbers[j]==target){
        //             vec.push_back(i+1);
        //             vec.push_back(j+1);
        //         }
        //     }
        // }
        // return vec;
        int left = 0, right = numbers.size() - 1; 
        vector<int> result;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                result.push_back(left + 1); 
                result.push_back(right + 1);
                break; 
            } else if (sum < target) {
                ++left; 
            } else {
                --right; 
            }
        }
        return result;
    }
};