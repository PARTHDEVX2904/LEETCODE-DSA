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
    int isBalancedFast(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        if(!root->left && !root->right) return 1;
        int left = isBalancedFast(root->left);
        if (left == -1) return -1;

        int right = isBalancedFast(root->right);
        if (right == -1) return -1;
        bool cond = abs(left-right) <= 1;
        

        if(cond) return 1+max(left,right);
        else{
            return -1;
        }

    }
    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root)!=-1;
    }
};