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
    int dfs(TreeNode* root , int path ){
        //base case
        if(!root) return 0;
        path = path*10 + root->val;
        if(!root->right && !root->left){
            return path;
        }
        return dfs(root->left,path) + dfs(root->right,path);

    }
    int sumNumbers(TreeNode* root) {
        vector<int> number;
        return dfs(root, 0);

    }
};