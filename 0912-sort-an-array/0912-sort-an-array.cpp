class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> res(high - low + 1);
        int i = low, j = mid + 1, k = 0;
        while(i <= mid && j <= high) {
            if(arr[i] <= arr[j]) res[k++] = arr[i++];
            else res[k++] = arr[j++];
        }
        while(i <= mid) res[k++] = arr[i++];
        while(j <= high) res[k++] = arr[j++];
        for(int x = 0; x < res.size(); x++) {
            arr[low + x] = res[x];
        }
    }

    void mergeSort(vector<int> &arr, int low, int high) {
        if(low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            merge(arr, low, mid, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};