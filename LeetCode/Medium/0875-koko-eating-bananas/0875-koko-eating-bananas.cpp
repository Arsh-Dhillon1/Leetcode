class Solution {
public:
    bool func(vector<int>& piles,int mid,int h){
        long hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=(piles[i] + mid -1)/mid;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long low=1;
        long high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            long mid=(low+high)/2;
            if(func(piles,mid,h)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};