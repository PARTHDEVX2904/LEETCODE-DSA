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
    int maxHeight(TreeNode* root){
        if(!root) return 0;
        return 1 + max(maxHeight(root->left),maxHeight(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        int left = maxHeight(root->left);
        int right = maxHeight(root->right);
        int diameter = left + right;
        int sub = max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(sub,diameter);
    }
};