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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        bool LeftRight=true;
        while(!q.empty()){
            int sz=q.size();
            vector<int> vec(sz);
            for(int i=0;i<sz;i++){
                TreeNode* temp=q.front();
                int ind=LeftRight? i:sz-1-i;
                vec[ind]=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                q.pop();
            }
            res.push_back(vec);
            LeftRight=!LeftRight;
        }
        return res;
    }
};