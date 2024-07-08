// In this file i am learning searching algorithum binary search
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end-start)/2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[1000];
    cout << "Enter the size of the array";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key element in the array";
    int key;
    cin >> key;

    cout << BinarySearch(arr, n, key);
}