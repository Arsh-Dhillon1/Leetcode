class Solution {
    long firstOccurence(vector<int>& arr, int target){
        long low=0,high=arr.size() - 1,ans=-1;
        while(low<=high){
            long mid=(high+low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
        }
        return ans;
    }
    long lastOccurence(vector<int>& arr, int target){
        long low=0,high=arr.size() - 1,ans=-1;
        while(low<=high){
            long mid=(high+low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> res;
        res.push_back(firstOccurence(arr,target));
        res.push_back(lastOccurence(arr,target));
        return res;
    }
};