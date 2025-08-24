class Solution {
public:
    int binarySearch(vector<int>& arr, int low, int high, int target){
        int n=arr.size();
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
    int minIndex(vector<int>& arr, int low, int high){
        int n=arr.size();
        int index=-1;
        if (arr[low] <= arr[high]) return low;
        while(low<=high){
            int mid=(low+high)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
                return mid;
            }
            else if(arr[low]<=arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return index;
    }

    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int index=minIndex(arr,0,n-1);
        int first=binarySearch(arr,0,index-1,target);
        int second=binarySearch(arr,index,n-1,target);
        if(first==-1 && second==-1){
            return -1;
        }
        else if(first>=0){
            return first;
        }
        else{
            return second;
        }
        
    }
};