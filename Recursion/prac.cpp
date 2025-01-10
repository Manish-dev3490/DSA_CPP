#include<iostream>
using namespace std;

void p(int arr[],int size,int index){
    if(index==size){
        return;
    }
    else {
        return arr[index]+p(arr,size,index+1);
    }
}
int main(){
    
}