#include <iostream>
using namespace std;

// Now i am going to implement a stack with using linked list because linked list does not have problem of storage sollet us implement it with the linked list...

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class stack
{
    public:
    Node *head;


    stack()
    {
        head = NULL;
    }

    bool isempty()
    {
        return head == NULL;
    }

    void push(int x)
    {
        if (isempty())
        {
            Node *temp = new Node(x);
            head = temp;
            cout << x << " is pushed into the stack";
        }

        else
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
            cout << x << " is pushed into the stack";
        }
    }

    int pop()
    {
        if (isempty())
            return -1;
        Node *temp = head;
        head = head->next;
        cout << temp->data << "is popped from the stack";
        delete temp;
    }

    int top(){
        if(isempty())return -1;
        cout<<head->data<<"is the top element";
        return head->data;
    }

};


main()
{
    stack s1;
    s1.push(10);
    cout<<endl;
    s1.push(12);
    cout<<endl;
    s1.push(14);
    cout<<endl;
    s1.push(15);
    cout<<endl;
    s1.push(16);
    cout<<endl;
    s1.push(17);
    cout<<endl;
    s1.pop();
    cout<<endl;
    s1.top();
}