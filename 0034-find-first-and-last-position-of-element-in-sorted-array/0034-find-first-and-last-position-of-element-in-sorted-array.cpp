class Solution {
public:
    int firstOccurence(vector<int>& arr,int target){
        long ans=-1;
        long low=0;
        long high=arr.size()-1;
        while(low<=high){
            long mid=(high+low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
    int lastOccurence(vector<int>& arr,int target){
        long ans=-1;
        long low=0;
        long high=arr.size()-1;
        while(low<=high){
            long mid=(high+low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int a=(firstOccurence(nums,target));
        int b=(lastOccurence(nums,target));
        return {a,b};
    }
};