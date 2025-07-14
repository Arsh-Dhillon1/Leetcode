class Solution {
public:
    bool canJump(vector<int>& arr) {
        int reached=arr.size()-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]+i>=reached){
                reached=i;
            }
        }
        if(reached==0){
            return true;
        }
        return false;
    }
};