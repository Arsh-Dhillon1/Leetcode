class Solution {
public:
void swap(int &a,int &b){
        int c=a;
        a=b;
        b=c;
    }
    vector<int> findErrorNums(vector<int>& arr) {
        for(int i=0;i<arr.size();){
            if(arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
            }
            else{
                i++;
            }
        }
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                return {arr[i],i+1};
            }
        }
        return {-1,-1};
    }
};
