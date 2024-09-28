#include<iostream>
using namespace std;

void update(int **ptr){
    *ptr=*ptr+1;
}

int main(){
    int i=10;
    int *ptr=&i;
    int **ptr1=&ptr;

    // cout<<"val of "<<i;
    // cout<<endl;
    // cout<<"val of "<<*ptr1<<endl;
    cout<<"val of ptr before "<<*ptr1<<endl;



    // cout<<"address of "<<&i<<endl;
    // cout<<"address of "<<&ptr<<endl;
    // cout<<"address of "<<&ptr1<<endl;

    update(ptr1);
    cout<<"val of ptr after "<<*ptr1<<endl;

}