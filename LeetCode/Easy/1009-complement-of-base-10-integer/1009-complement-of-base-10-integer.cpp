class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int n2=n;
        int mask=0;
        while(n2!=0){
            mask=mask<<1 | 1;
            n2=n2>>1;
        }
        int res=~n&mask;
        return res;
    }
};