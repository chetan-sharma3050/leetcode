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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* r1=root;
        TreeNode* r2=root;
        if(r1==NULL) return NULL;
        
        TreeNode* temp=r1->left;
        r1->left=r2->right;
        r2->right=temp;
        invertTree(r1->left);
        invertTree(r2->right);
        return root;

        
        // swap(r1->val,r2->val);

        
    }
};