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
    int findlevel(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(findlevel(root->left),findlevel(root->right));
    }
    void nthlevel(TreeNode* root ,int curr,int level,vector<int>&v){
        if(root==NULL) return ;
        if(curr==level) {
            v.push_back(root->val);
            return;
        }
        nthlevel(root->left,curr+1,level,v);
        nthlevel(root->right,curr+1,level,v);
    }
    void lOrder(TreeNode* root,vector<vector<int>> &arr){
        int n=findlevel(root);
          for(int i = 1; i <= n; i++) {
            vector<int> v;
            nthlevel(root, 1, i,v);
            arr.push_back(v);
            cout<<endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        lOrder(root,arr);
       
        return arr;
        
    }
};