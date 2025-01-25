class Solution {
public:
    int countSegments(string s) {
        int count=0;
        istringstream stream(s);
        string word;
        while(stream>> word){count++;}
        return count;
    }
};