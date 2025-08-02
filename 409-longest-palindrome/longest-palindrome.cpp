// class Solution {
// public:
//     int longestPalindrome(string s) {
//         if(s.size()<2)return s.size();
//         int even=0,odd=0;
//         int len=0;
//         unordered_map<char,int>freq;
//         for(char ch:s){
//             freq[ch]++;
//         }
//         for(const auto& n:freq){
//             if(n.second%2==0){
//                 even+=n.second;
//                 len+=even;
//             }
//             else{
//                 odd+=n.second;
//                 if(odd>1){
//                     len=len+(odd-1);
//                 }
//             }
//         }
//     return len;
//     }
// };

#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() < 2) return s.size();

        unordered_map<char, int> freq;
        for (char ch : s) freq[ch]++;

        int length = 0;
        bool hasOdd = false;

        for (const auto& pair : freq) {
            int count = pair.second;
            length += count / 2 * 2;  // Add even pairs
            if (count % 2 == 1) hasOdd = true;  // Mark if any odd exists
        }

        return length + (hasOdd ? 1 : 0);  // Add center if any odd
    }
};