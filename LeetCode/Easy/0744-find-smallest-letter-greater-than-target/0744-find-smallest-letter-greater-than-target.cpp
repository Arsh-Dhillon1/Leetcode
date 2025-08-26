class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int low=0;
        int high=arr.size()-1;
        char res=arr[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                res=arr[mid];
                high=mid-1;
            }
        }
        return res;
    }
};