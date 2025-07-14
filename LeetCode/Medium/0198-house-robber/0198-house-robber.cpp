class Solution {
public:
    int rob(vector<int>& arr) {
        vector<int>dp(arr.size());
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<arr.size();i++){
            dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
        }
        return dp[arr.size()-1];
    }
};