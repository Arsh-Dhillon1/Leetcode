class Solution {
public:
    int compress(vector<char>& arr) {
        int index=0;
        int i=0;
        while(i<arr.size()){
            char current_char=arr[i];
            int count=0;
            while(i<arr.size() && current_char==arr[i]){
                count++;
                i++;
            }
            arr[index]=current_char;
            index++;

            if(count>1){
                string countString=to_string(count);
                for(int i=0;i<countString.size();i++){
                    arr[index]=countString[i];
                    index++;
                }
            }
        }
        return index;
    }
};