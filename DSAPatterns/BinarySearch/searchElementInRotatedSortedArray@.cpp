#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool binarySearch(vector<int> &arr, int target, int start, int end)
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return true;
            else if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }

    int findMinIndex(vector<int> &arr)
    {
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start <= end)
        {
            // Already sorted
            if (arr[start] < arr[end])
                return start;

            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n, prev = (mid - 1 + n) % n;

            // Check min element
            if (arr[mid] < arr[prev] && arr[mid] < arr[next])
                return mid;

            // Handle duplicates
            if (arr[start] == arr[mid] && arr[mid] == arr[end])
            {
                start++;
                end--;
                continue;
            }

            // Left half sorted
            if (arr[start] <= arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return 0; // Fallback
    }

    bool search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int minIndex = findMinIndex(arr);

        // Search in both halves
        bool left = binarySearch(arr, target, 0, minIndex - 1);
        bool right = binarySearch(arr, target, minIndex, n - 1);

        return left || right;
    }
};

int main()
{

    return 0;
}