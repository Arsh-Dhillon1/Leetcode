class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count=0;
        int total=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
            }
            if(arr[i]==0 || i==arr.size()-1){
                if(count>total){
                    total=count;
                    count=0;
                }
            }
        }     
        return total;
    }
};