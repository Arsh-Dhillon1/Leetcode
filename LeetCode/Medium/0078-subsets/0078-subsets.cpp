class Solution {
public:
vector<vector<int>> result;
    void func(vector<int>& arr, vector<int>& temp,int i){
        if(i>=arr.size()){
            result.push_back(temp);
            return ;
        }
        temp.push_back(arr[i]);
        func(arr,temp,i+1);
        temp.pop_back();
        func(arr,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        int i=0;
        vector<int> temp;
        func(arr,temp,i);
        return result;
    }
};