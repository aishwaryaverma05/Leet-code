/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int heightbal(TreeNode* root){
        if(root==NULL) return 0;

        int left_path=heightbal(root->left);
        if(left_path==-1)return -1;

        int right_path=heightbal(root->right);
        if(right_path==-1)return -1;

        if(abs(left_path-right_path)>1)return -1;

        return 1+max(left_path,right_path);


    }
    bool isBalanced(TreeNode* root) {
        int res=heightbal(root);
        return (res!=-1)? true: false;
    }
};