class Solution {
public:
    int search(vector<int>& arr, int target) {
        long size=arr.size();
        long low=0;
        long high=size-1;
        while(low<=high){
            long mid=(low+high)/2;
            if(target==arr[mid]){
                return mid;
            }
            else if(arr[mid]<target){
                low=1+mid;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};