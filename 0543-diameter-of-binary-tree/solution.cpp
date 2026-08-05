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
    // int maxHeight(TreeNode* root){
    //     if(!root) return 0;
    //     return 1 + max(maxHeight(root->left),maxHeight(root->right));
    // }
    int dfs(TreeNode* root, int& res){
        if(!root) return 0;

        int left = dfs(root->left,res);
        int right = dfs(root->right, res);
        res = max(res,left+right);
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if(!root) return 0;

        // int left = maxHeight(root->left);
        // int right = maxHeight(root->right);
        // int diameter = left + right;
        // int sub = max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        // return max(sub,diameter);

        //dfs traversal
        if(!root) return 0;
        int res = 0;
        dfs(root,res);
        return res;  
    }
};