class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min=arr[0];
        int index=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                index=i;
                min=arr[i];
            }
        }
        int max=0;
        for(int i=index;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max-min;
    }
};