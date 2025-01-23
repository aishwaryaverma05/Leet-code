class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distinct_nums;
        for (int num : nums) {
            distinct_nums.insert(num);
        }
        if (distinct_nums.size() < 3) {
            return *distinct_nums.rbegin(); 
        }
        auto it = distinct_nums.rbegin();
        ++it; 
        ++it;
        return *it; 
    }
};