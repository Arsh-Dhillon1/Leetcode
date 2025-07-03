class Solution {
public:
    int reverse(int num) {
        int temp=num;
        int finalval=0;
        while(temp!=0){
                if (finalval > INT_MAX / 10 || finalval < INT_MIN / 10){
                    return 0;
                }
            int rem=temp%10;
            finalval=finalval*10+rem;
            temp=temp/10;
        }
        return finalval;
    }
};