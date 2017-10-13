/*Invert a binary tree. 
     4
   /   \
  2     7
 / \   / \
1   3 6   9

to 

     4
   /   \
  7     2
 / \   / \
9   6 3   1   */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Solution 1  
class Solution 
{
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root)
        {
            TreeNode* temp=root->left;
            root->left=root->right;
            root->right=temp;
            invertTree(root->right);
            invertTree(root->left);
        }
        return root;
    }
};