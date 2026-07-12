class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int m=matrix.size(); //3
        int n=matrix[0].size(); //4
        int left=0,top=0;
        int right=n-1,bottom=m-1;
        while(top<=bottom && left<=right){
            //left->right
            for(int i=left;i<=right;i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            //top->bottom
            for(int i=top;i<=bottom;i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            //right->left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }  
            
            //bottom->top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        return vec;
    }
};