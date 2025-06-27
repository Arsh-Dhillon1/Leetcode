class Solution {
    public int singleNumber(int[] arr) {
        int add=0;
        for(int i=0;i<arr.length;i++){
            add^=arr[i];
        }
        return add;
    }
}