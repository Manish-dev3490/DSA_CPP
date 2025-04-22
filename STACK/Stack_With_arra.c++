#include<iostream>
using namespace std;

// stack is a linear data structure which is used to store the elements is last in first out mechanism and it can be implemented using arrays linked list  queue let us learn to implement with arrays first....
class stack{
int arr[10000];
int top;
public:
stack(){
    top=-1;
}

bool isempty(){
    if(top==-1)return true;
    return false;
}

void push(int x){
    if(top==-1){
        top++;
        arr[top]=x;
        cout<<x<<" " " is pushed into the stack";
    }

    else {
        top++;
        arr[top]=x;
        cout<<x<<" " " is pushed into the stack";
    }
}

int pop(){
    if(isempty())return -1;
    int val=arr[top];
    top--;
    cout<<val<<" "<<"is popped out from the stack";
    return val;
}

int peek(){
    if(isempty())return -1;
    cout<<arr[top]<<" is the top element of the stack";
    return arr[top];
}
};

int main(){
stack s1;
s1.push(10);
s1.push(11);
s1.push(12);
s1.push(13);
s1.push(14);
s1.push(15);

cout<<endl;
s1.pop();
cout<<endl;
s1.peek();

}