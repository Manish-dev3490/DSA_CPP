#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array you want";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target key you want to search in a array";
    int target;
    cin >> target;


    // Logic starts from here brute force with linear search
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == target){
            cout<< i;
        }

        else if(arr[i] < target && arr[i+1] > target){
            cout<< i+1;
        }
    }
}