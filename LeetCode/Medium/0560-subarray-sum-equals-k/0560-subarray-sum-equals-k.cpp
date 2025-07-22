class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> sumCount;
        int sum=0,count=0;
        sumCount[0]=1;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sumCount.find(sum-k)!=sumCount.end()){
                count+=sumCount[sum-k];
            }
            sumCount[sum]++;
        }
        return count;
    }
};