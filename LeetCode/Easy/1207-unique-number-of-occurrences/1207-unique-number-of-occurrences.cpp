class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> freq;
        for(int i=0;i<arr.size();){
            int count=1;
            int j=i+1;
            while(j<arr.size() && arr[i]==arr[j]){
                count++;
                j++;
            }
            freq.push_back(count);
            i=j;
        }
        for(int i=0;i<freq.size();i++){
            for(int j=i+1;j<freq.size();j++){
                if(freq[i]==freq[j]) return false;
            }
        }
        return true;
    }
};