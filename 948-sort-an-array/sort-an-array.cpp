class Solution {
public:
    pair<int, int> partition(vector<int>& nums, int start, int end) {
        int randomIdx = start + rand() % (end - start + 1);
        int pivot = nums[randomIdx];
        int low = start; int high = start;

        for (int i = start; i <= end; i++) {
            if (nums[i] < pivot) {
                swap(nums[i], nums[low]);
                low++;
            }
        }
        high = low;
        for (int i = low; i <= end; i++) {
            if (nums[i] == pivot) {
                swap(nums[i], nums[high]);
                high++;
            }
        }
        return {low, high - 1};
    }

    void quickSort(vector<int>& nums, int start, int end) {
        if (start >= end) return;
        
        pair<int, int> range = partition(nums, start, end);
        quickSort(nums, start, range.first - 1);
        quickSort(nums, range.second + 1, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};