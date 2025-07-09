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

    void Helper(TreeNode* root, int targetSum, int sum,vector<int> path,vector<vector<int>>& res){
        if(root==nullptr)return ;
        sum=sum+root->val;
        path.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            if(sum==targetSum){
                res.push_back(path);
            }
        }
        Helper(root->left,targetSum,sum,path,res);
        Helper(root->right,targetSum,sum,path,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> res;
        Helper(root,targetSum,0,path,res);
        return res;
    }
};