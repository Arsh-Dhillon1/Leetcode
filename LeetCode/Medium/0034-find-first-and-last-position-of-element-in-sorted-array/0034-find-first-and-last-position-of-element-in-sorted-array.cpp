class Solution {
public:
    int firstPos(vector<int> arr,int high, int low, int target){
        int res=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==target){
                res=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
    int lastPos(vector<int> arr,int high, int low, int target){
        int res=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==target){
                res=mid;
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        if(arr.size()==0) return {-1,-1};
        int first=firstPos(arr,arr.size()-1,0,target);
        int second=lastPos(arr,arr.size()-1,0,target);
        return {first,second};
    }
};