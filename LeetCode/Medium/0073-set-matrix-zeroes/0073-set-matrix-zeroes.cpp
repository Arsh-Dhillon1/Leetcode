class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        vector<vector<int>> ans(row,vector<int>(col));
        ans=arr;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(arr[i][j]==0){
                    for(int k=0;k<row;k++){
                        ans[k][j]=0;
                    }
                    for(int k=0;k<col;k++){
                        ans[i][k]=0;
                    }
                }
            }
        }
        arr=ans;
    }
};