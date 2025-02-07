class Solution {
public:
    int largest = 0, start = 0, end = 0;

    bool isPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    if ((j - i + 1) > largest) {
                        largest = j - i + 1;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        return s.substr(start, end - start + 1);
    }
};