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
        // if(root == NULL){
        //     return 0;
        // }
        // int depth = 0;
        // int left = maxDepth(root->left);
        // int right = maxDepth(root->right);

        // depth = max(left,right) + 1;
        // return depth ;
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});
        int res = 0;

        while(!st.empty()){
            pair<TreeNode*, int> curr = st.top();
            st.pop();
            TreeNode* node = curr.first;
            int depth = curr.second;

            if(node!= NULL){
                res = max(res,depth);
                st.push({node->left , depth+1});
                st.push({node->right, depth+1});
            }
        }

        return res;
    }
};