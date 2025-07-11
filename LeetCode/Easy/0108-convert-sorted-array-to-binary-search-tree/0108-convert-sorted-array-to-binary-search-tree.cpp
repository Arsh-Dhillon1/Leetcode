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
    TreeNode* Helper(vector<int>& arr, int low, int high){

        if(low>high) return nullptr;
        int mid=(high+low)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=Helper(arr,low,mid-1);
        root->right=Helper(arr,mid+1,high);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        return Helper(arr,low,high);
    }
};