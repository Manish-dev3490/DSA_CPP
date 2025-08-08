#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countFreq(vector<int> &arr, int target)
    {
        // code here
        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == target)
                count++;
            else if (arr[i] < target)
                continue;
            else
                break;
        }

        return count;
    }
};

int main()
{
}