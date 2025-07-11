class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& newInterval) {
        arr.push_back(newInterval);
        vector<vector<int>> ans;
        if(arr.empty()) return ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            vector<int>& last=ans.back();
            if(last[1]>=arr[i][0]){
                last[1]=max(last[1],arr[i][1]);
            }
            else{
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};