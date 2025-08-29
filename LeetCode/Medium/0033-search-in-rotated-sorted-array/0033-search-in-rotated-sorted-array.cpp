class Solution {
public:
    int indexOfSmallest(vector<int>& arr) {
        int low = 0;
        int n = arr.size();
        int high = n - 1;
        if (arr[low] <= arr[high])
            return low;
        while (low <= high) {
            int mid = (low + high) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;
            if (arr[mid] < arr[next] && arr[mid] < arr[prev]) {
                return mid;
            } else if (arr[mid] >= arr[0]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return 0;
    }
    int binarySearch(vector<int>& arr, int target, int low, int high) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int min = indexOfSmallest(arr);
        int first = binarySearch(arr, target, 0, min - 1);
        int second = binarySearch(arr, target, min, n - 1);
        if (first != -1)
            return first;
        return second;
    }
};