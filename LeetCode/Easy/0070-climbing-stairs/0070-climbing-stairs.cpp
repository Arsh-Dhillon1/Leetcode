class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1)
            return 1;
        // int len = n + 1;
        int arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        for (int i = 2; i < n+1; i++) {
            arr[i] = arr[i - 2] + arr[i - 1];
        }
        return arr[n];
    }
};