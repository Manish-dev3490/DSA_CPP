#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {2, 7, 11, 15, 27};
    int target = 18;
    int firstindex, secondindex;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                firstindex = i, secondindex = j;
            }
        }
    }

    vector<int> ans;
    ans.push_back(firstindex);
    ans.push_back(secondindex);

    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";


















}