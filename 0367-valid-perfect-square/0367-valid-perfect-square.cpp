class Solution {
public:
    bool isPerfectSquare(int nums) {
        long high=nums;
        long low=1;
        while(low<=high){
            long mid=(high+low)/2;
            long n=mid*mid;
            if(n==nums){
                return true;
            }
            else if(n>nums){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};