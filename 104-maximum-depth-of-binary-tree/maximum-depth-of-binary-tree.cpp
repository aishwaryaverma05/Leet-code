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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int levels=0;
        while(true){
            int cnt=q.size();
            if(cnt==0) return levels;
            
            while(cnt>0){
                TreeNode *root=q.front();
                q.pop();
                if(root->left!=NULL){
                    q.push(root->left);
                }
                if(root->right!=NULL){
                    q.push(root->right);
                }
                cnt--;
            }
            levels++;
        }
        return levels;
    }
};