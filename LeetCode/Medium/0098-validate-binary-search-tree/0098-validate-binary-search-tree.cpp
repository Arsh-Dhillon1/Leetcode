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
    bool Helper(TreeNode* root, long min,long max){
        if(root==nullptr) return true;
        if(root->val<=min || root->val>=max){
            return false;
        }
        bool left=Helper(root->left,min,root->val);
        bool right=Helper(root->right,root->val,max);
        
        return left&&right;
        
    }

    bool isValidBST(TreeNode* root) {

        if(root==nullptr) return true;
    
        // if(root->left==nullptr && root->right==nullptr)return 0
        return Helper(root,LONG_MIN,LONG_MAX);

    }
};