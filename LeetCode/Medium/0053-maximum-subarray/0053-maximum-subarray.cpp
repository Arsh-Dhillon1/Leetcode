class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int ans=arr[0];
        // vector<vector<int>> dp(n+1),vector<int>(m+1,0);
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum<0){
                sum=0;
            }
            else if(sum>ans){
                ans=sum;
            }
        }
        return ans;
    }
};