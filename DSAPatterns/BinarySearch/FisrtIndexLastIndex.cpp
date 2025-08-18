#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    pair<long, long> indexes(vector<long long> arr, long long target)
    {
        // code here
        pair<long, long> ans;
        long long first = -1, second = -1, start = 0, end = arr.size() - 1, mid;

        // left most index
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                first = mid;
                end = mid - 1;
            }

            else if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        // right most index
        start = 0, end = arr.size() - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                second = mid;
                start = mid + 1;
            }

            else if (arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        ans.first = first;
        ans.second = second;
        return ans;
    }
};
int main()
{

    return 0;
}