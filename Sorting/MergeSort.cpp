#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low, right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
     
    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }
for(int i=0;i<temp.size();i++){
    arr[low+i]=temp[i];
}

    }


void mergesort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[5] = {3, 1, 5, 4, 2};
    int n = 5;
    mergesort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}