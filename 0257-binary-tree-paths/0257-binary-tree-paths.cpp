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

    void Helper(TreeNode* root, vector<string> &ans,string temp){
        if(root==nullptr) return ;
        if(temp==""){
            temp+=to_string(root->val);
        }
        else{
            temp+="->"+to_string(root->val);
        }
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(temp);
        }
        Helper(root->left,ans,temp);
        Helper(root->right,ans,temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        Helper(root,ans,"");
        return ans;
    }
};