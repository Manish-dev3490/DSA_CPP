#include <iostream>
using namespace std;

// Stack- Stack is a linear data structure which is sued to stire the elements in it.but we are not allowed to randorm acess of elements in stack.we are only allowed to insert and delete of elements from on the top of the stack.it is also known as LIFO(last in first out) because which elements push in the last remove first.we can perfrom push,pop,size,empty,peek operations on the stack .so now we have to use data members and function together fr that we have to use class....

// Implementation of the stack using Arrays . so we need array,size,peek......
class Stack
{

    int *arr;
    int size;
    int top;

public:
    // This is parameterized construtor for initializing values with valid data otherwise default construtur will fill random data in our stack. This constructor will initialize size with our passing value and pek with -1 and create a array in the heap which will return adrress of that array ....
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push operation on the stack
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Your stack is overflow" << endl;
        }

        else
        {
            top++;
            arr[top] = value;
            cout<<value <<"is pushed";
        }
    }

    // pop operation on the stack
    void pop()
    {
        if (top == -1)
        {
            cout << "Your stack is underflow you cannot pop element now" << endl;
        }

        else
        {
            cout << arr[top] <<"is deleted " << endl;
            top--;
        }
    }

    // peek of the stack
    int peek()
    {
        if (top == -1)
        {
            cout << "Your stack is underflow you cannot access peak element" << endl;
            return -1;
        }

        else
        {
            return arr[top];
        }
    }

    bool isempty()
    {
        return top == -1;
    }

    int issize()
    {
        return top + 1;
    }

    void print(){
        if(top==-1) cout<<"your stack is un derflow";
        else
        cout<<arr[top];
    }
};

int main()
{

    // creating a stack
    Stack s1(10);
    s1.push(4);
    cout<<endl;
    s1.pop();
    
}
