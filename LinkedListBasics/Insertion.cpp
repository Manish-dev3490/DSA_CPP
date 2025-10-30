#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    // by default constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    // Inserting Nodes in Starting of the Linked List
    Node *Head=NULL;
    if(Head==NULL){
        Head=new Node(10);
    }

    else {
        Node *temp=new Node(5);
        temp->next=Head;
        Head=temp;
        delete temp;
    }

    cout<<Head->next;


    return 0;
}