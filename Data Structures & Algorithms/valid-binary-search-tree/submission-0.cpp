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

    static bool leftCheck(int val, int limit){
        return val < limit;
    }

    static bool rightCheck(int val, int limit){
        return val > limit;
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        
        if(!isValid(root->left, root->val, leftCheck) ||
        !isValid(root->right, root->val, rightCheck)) return false;

        return isValidBST(root->left) && isValidBST(root->right);
    }

    bool isValid(TreeNode* root, int limit, bool (*check)(int, int)){
        if(!root) return true;
        if(!check(root->val, limit)) return false;

        return isValid(root->left, limit, check) && isValid(root->right, limit, check);
    }

};
