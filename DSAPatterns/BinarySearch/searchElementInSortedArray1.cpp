#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }

    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1, mid, index = 0;

        // Find min index
        while (start <= end) {
            mid = start + (end - start) / 2;
            int next = (mid + 1) % n, prev = (mid - 1 + n) % n;
            if (arr[mid] < arr[prev] && arr[mid] < arr[next]) {
                index = mid;
                break;
            }
            if (arr[start] <= arr[mid] && arr[mid] <= arr[end]) {
                index = start;
                break;
            }
            if (arr[start] <= arr[mid]) start = mid + 1;
            else if (arr[mid] <= arr[end]) end = mid - 1;
        }

        // Binary search in left part
        int value1 = binarySearch(arr, 0, index - 1, target);
        if (value1 != -1) return value1;

        // Binary search in right part
        return binarySearch(arr, index, n - 1, target);
    }
};


int main()
{

    return 0;
}