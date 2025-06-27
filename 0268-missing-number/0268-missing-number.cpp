class Solution {
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
public:
    int missingNumber(vector<int>& arr) {
        for(int i=0;i<arr.size();){
            if(arr[i]!=i && arr[i]<arr.size()){
                swap(arr[i],arr[arr[i]]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i){
                return i;
            }
        }
        return arr.size();
    }
};