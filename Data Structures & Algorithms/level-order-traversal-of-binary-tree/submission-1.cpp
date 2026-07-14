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

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*> q;
        vector<vector<int>> res;

        q.push(root);

        while(!q.empty()){
            int len = q.size();
            vector<int> lvl;

            for(int i = len; i>0; i--){
                TreeNode* tmp = q.front();
                q.pop();

                if(tmp){
                    lvl.push_back(tmp->val);
                    q.push(tmp->left);
                    q.push(tmp->right);
                }
            }

            if(!lvl.empty()) res.push_back(lvl);
        }

        return res;
    }
};
