class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        int size = arr.size();
        vector<int> arr2(size * 2);
        for (int i = 0; i < size; i++) {
            arr2[i] = arr[i];
        }

        for (int i = 0, j = size; i < size; i++, j++) {
            arr2[j] = arr[i];
        }

        return arr2;
    }
};
