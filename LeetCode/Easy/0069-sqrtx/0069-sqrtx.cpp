class Solution {
public:
    int mySqrt(int x) {
        long low=0;
        long high=x;
        long ans=0;
        while(low<=high){
            long mid=(high+low)/2;
            long n=mid*mid;
            if(n==x){
                return mid;
            }
            else if(n>x){
                high=mid-1;
            }
            else if(n<x){
                ans=mid;
                low=mid+1;
            }

        }
        return ans;
    }
};