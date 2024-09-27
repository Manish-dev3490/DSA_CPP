#include<iostream>
using namespace std;
int main(){
   
//  this is how we store the address of a variable in the pointer fot the int datatype
//      int num=10;
//     int *ptr=&num;
//     cout<<*ptr;
//     cout<<endl;

    // this is how we increment the value of a variable using poinertrs
//     (*ptr)++;
//     cout<<*ptr;

    // copying a poinetr into other pointer
//     int *ptr2=ptr;
//     cout<<endl;
//     cout<<"The value of ptr2 is"<<ptr2<<endl;
//     cout<<"The value of ptr is"<<ptr<<endl;
//     cout<<"The address of num is"<<ptr<<endl;


    // important concept of pointers
//     cout<<endl;
//    int i = 3;
//    int *t = &i;
   
//    *t = *t +1;
//     cout << *t << endl;




// Now we are playin g with ppointers through double data type
    double num=10.10;
    double *ptr=&num;
    cout<<"The address of num is "<<&num<<endl;
    cout<<"The address of num is "<<ptr<<endl;
    cout<<"The value of num is "<<*ptr<<endl;


    // playing with pointer arithmetic operators
    cout<<(*ptr)++;
    cout<<endl;
    cout<<(*ptr)--;
    cout<<endl;
    cout<<(*ptr);




   

}