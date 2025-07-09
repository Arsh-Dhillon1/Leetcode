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
    void preOrder(TreeNode* root,int &sum,int ans){
        if(root==nullptr)return ;
        ans=ans*10+root->val;
        if(root->left==nullptr&&root->right==nullptr){
            sum=sum+ans;
            return ;
        }
        preOrder(root->left,sum,ans);
        preOrder(root->right,sum,ans);

    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int ans=0;
        preOrder(root,sum,ans);
        return sum;
    }
};