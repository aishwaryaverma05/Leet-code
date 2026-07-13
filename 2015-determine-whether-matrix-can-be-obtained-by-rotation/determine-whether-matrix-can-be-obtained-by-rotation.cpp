class Solution {
public:
    void rotation(vector<vector<int>>& mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int rotate=0;rotate<4;rotate++){
            if(mat==target){
                return true;
            }
            rotation(mat);
        }
        return false;
    }
};