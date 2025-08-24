class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0;
        int n=arr.size();
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(arr[mid]<arr[prev] && arr[mid]<arr[next]){
                return arr[mid];
            }
            else if(arr[0]<arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return arr[0];
    }
};