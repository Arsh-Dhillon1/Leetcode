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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> ans1;
            int size=q.size();
            if(root==nullptr) return ans;
            for(int i=0;i<size;i++){
                TreeNode* cur=q.front();
                q.pop();
                ans1.push_back(cur->val);
                if(cur->left!=nullptr){
                    q.push(cur->left);
                }
                if(cur->right!=nullptr){
                    q.push(cur->right);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};