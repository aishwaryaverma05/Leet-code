class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for (int i = 0; i < nums1.size(); i++) {
            int foundIndex = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    foundIndex = j;
                    break;
                }
            }
            int nextGreater = -1;
            for (int k = foundIndex + 1; k < nums2.size(); k++) {
                if (nums2[k] > nums1[i]) {
                    nextGreater = nums2[k];
                    break;
                }
            }
            vec.push_back(nextGreater);
        }
        return vec;
    }
};
