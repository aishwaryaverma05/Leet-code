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
    int minDepth(TreeNode* root) {
        if (root==NULL) return 0;
        int depth=1;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode * node=q.front();
                q.pop();

                if(node->right==NULL && node->left==NULL){
                    return depth;
                }
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            depth++;
        }
        return depth;
    }
};