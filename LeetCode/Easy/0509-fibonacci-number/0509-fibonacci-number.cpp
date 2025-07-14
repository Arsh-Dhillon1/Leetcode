class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int length=n+1;
        int arr[length];
        arr[0]=0;
        arr[1]=1;
        // int sum=0;

        for(int i=2;i<length;i++){
            arr[i]=(arr[i-1]+arr[i-2]);
        }
        return arr[n];
    }
};