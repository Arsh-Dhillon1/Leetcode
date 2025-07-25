class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<arr.size();i++){
            int remaining=target-arr[i];
            if(hash.count(remaining)){
                return {hash[remaining],i};
            }
            else{
                hash[arr[i]]=i;
            }
        }
        return {1,2,3,4,5};
    }
};