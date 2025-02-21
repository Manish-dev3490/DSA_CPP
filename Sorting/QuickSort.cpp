#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    // Choosing last element as pivot
    int position = start; 

    for (int i = start; i <=end; i++) { // Loop through the array
        if (arr[i] <= arr[end]) {
            swap(arr[position], arr[i]); // Swap smaller elements to the left
            position++;
        }
    }
    // Place pivot in correct position
    return position-1; // Return correct pivot index
}



void quick(int arr[],int start,int end){
    if(start>=end)return;
    int pivot=partition(arr,start,end);
    quick(arr,start,pivot-1);
    quick(arr,pivot+1,end);

}
int main(){
    int arr[9]={2,1,3,2,4,6,8,9,4};
    quick(arr,0,8);
    for(int i=0;i<9;i++)cout<<arr[i]<<endl;

}