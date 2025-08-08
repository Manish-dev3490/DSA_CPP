#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countFreq(vector<int> &arr, int key)
    {
        // code here
        int count = 0;
        int start = 0, end = arr.size() - 1, mid, fIndex = -1, lIndex = -1;

        // code for finding first occurence
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == key)
            {
                fIndex = mid;
                end = mid - 1;
            }
            else if (arr[mid] < key)
                start = mid + 1;
            else
            {
                end = mid - 1;
            }
        }

        start = 0, end = arr.size() - 1;
        // code for finding last occurence
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == key)
            {
                lIndex = mid;
                start = mid + 1;
            }
            else if (arr[mid] > key)
                end = mid - 1;
            else
            {
                start = mid + 1;
            }
        }

        if (fIndex == -1 && lIndex == -1)
            return 0;
        return lIndex - fIndex + 1;
    }
};
int main()
{

    return 0;
}