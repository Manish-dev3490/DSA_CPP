#include<iostream>
using namespace std;


int main(){
    int arr[6]={3,6,2,7,8,11};
    int k=3;
    int count=0;
    for(int i=0;i<6;i++){
        int j=i;
        while(j<6 && count!=k){
            cout<<arr[j];
            count++;
            j++;
        }
        cout<<endl;
        count=0;
    }
}