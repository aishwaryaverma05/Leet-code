class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int left = 0;
        int zero_count = 0;
        int max_length = 0;
        int n = nums.size();
        for (int right = 0; right < n; ++right) {
            if (nums[right] == 0) {
                zero_count++;
            }
            while (zero_count > 1) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }
            max_length = std::max(max_length, right - left);
        }
        if (max_length == n) {
            return n - 1;
        }

        return max_length;
    }
};