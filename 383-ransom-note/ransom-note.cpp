class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // if(ransomNote != magazine) return false;
        if(ransomNote.size()> magazine.size()) return false;
        unordered_map<char,int> mag;
        for(char val:magazine){
            mag[val]++;
        }

        for(char val1:ransomNote){
            if(mag[val1]>0){
                mag[val1]--;
            }
            else{
                return false;
            }
        }
        return true;

    }
};