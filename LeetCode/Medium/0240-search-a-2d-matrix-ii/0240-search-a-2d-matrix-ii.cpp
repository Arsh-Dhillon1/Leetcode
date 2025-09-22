class Solution {
public:
    int binarSearch(vector<int>& arr, int target){
        int high=arr.size()-1;
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int i=-1;
        for(int i=0;i<arr.size()-1;i++){
            i=binarySearch(arr,target);
        }
        if(i!=-1) return true;
        return false;
    }
};