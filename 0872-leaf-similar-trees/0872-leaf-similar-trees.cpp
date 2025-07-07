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
    void func(TreeNode* root1,vector<int>& ans){
        if(root1==NULL)return ;
        func(root1->left,ans);
        func(root1->right,ans);
        if(root1->left==nullptr && root1->right==nullptr){
            ans.push_back(root1->val);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        vector<int>ans1;
        func(root1,ans);
        func(root2,ans1);
        // for(int i=0;i<ans.size();i++){
        //     if(ans[i]==ans1[i]){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return false;
        if(ans==ans1)return true;
        return false;
    }
};