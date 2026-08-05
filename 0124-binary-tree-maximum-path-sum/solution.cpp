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
    //int res = INT_MIN;
    // int getMax(TreeNode* root){
    //     if(!root) return 0;

    //     int left = getMax(root->left);
    //     int right = getMax(root->right);
    //     int path = root->val + max(right,left);
    //     //negative value won't be accepted 
    //     return max(path,0);
    // }
    int dfs(TreeNode* root, int& res){
        // if(!root) return;
        // int left = getMax(root->left);
        // int right = getMax(root->right);

        // res = max(res, root->val+left+right);

        // //recursive calls
        // dfs(root->left);
        // dfs(root->right);
        if(!root) return 0;

        int leftMax = max(dfs(root->left,res),0);
        int rightMax = max(dfs(root->right,res),0);

        res = max(res, root->val + leftMax + rightMax);

        return root->val + max(leftMax,rightMax);

    }
    int maxPathSum(TreeNode* root) {
        // dfs(root);
        // return res;
        int res = root->val;
        dfs(root, res);
        return res;
    }
};