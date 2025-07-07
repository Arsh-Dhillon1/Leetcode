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
    void func(TreeNode* root, vector<int>& ans){
        if(root==NULL) return ;
        func(root->left,ans);
        ans.push_back(root->val);
        func(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        int minDiff=INT_MAX;
        func(root,ans);//{4,2,1,3,6};
        for (int i = 1; i < ans.size(); i++) {
            minDiff = min(minDiff, ans[i] - ans[i - 1]);
        }
        return minDiff;
    }
};