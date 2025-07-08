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
    // void func(TreeNode* root, vector<int>& ans){
    //     if(root==nullptr){
    //         ans.push_back(INT_MIN);
    //         return ;
    //     }
    //     func(root->left,ans);
    //     func(root->right,ans);
    //     // if(root->val==NULL){
    //     //     ans.push_back(-1);
    //     // }
    //     ans.push_back(root->val);
    // }
    bool isSameTree(TreeNode* root1, TreeNode* root2) {
        // vector<int> ans;
        // vector<int> ans1;
        // func(root1,ans);
        // func(root2,ans1);
        // return ans==ans1;
        if(root1==nullptr && root2==nullptr)return true;
        if(root1==nullptr || root2==nullptr)return false;
        if(root1->val!=root2->val)return false;
        bool left=isSameTree(root1->left,root2->left);
        bool right=isSameTree(root1->right,root2->right);
        return left&&right;
        
    }
};