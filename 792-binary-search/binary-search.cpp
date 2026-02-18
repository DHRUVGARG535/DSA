class Solution {
public:
    int search(vector<int>& nums, int target) {

        int answer = binarySearch(nums, target);
        return answer;
    }

    int binarySearch(vector<int>& arr, int target) {
        int l = 0;
        int r = arr.size() - 1;
        int mid = 0;

        while (l <= r) {
            mid = (l + r) / 2;

            if (arr[mid] == target)
                return mid;

            else if (arr[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        return -1;
    }
};