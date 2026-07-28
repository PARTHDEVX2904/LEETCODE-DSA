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
    int findPos(vector<int> inorder, int element){
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==element){
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int> postorder, vector<int> inorder, int &index, int inOrderStart, int inOrderEnd,int n){
        //base case
        if(index < 0 || inOrderStart > inOrderEnd){
            return NULL;
        }

        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int position = findPos(inorder,element);

        root->right = solve(postorder , inorder , index, position+1 , inOrderEnd,n);
        root->left = solve(postorder , inorder , index, inOrderStart , position-1,n);
        

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        int postOrderIndex = n-1;
        TreeNode* ans = solve( postorder,inorder,postOrderIndex, 0 , n-1,n);
        return ans;
    }
};