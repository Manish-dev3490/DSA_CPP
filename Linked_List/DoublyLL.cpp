#include <iostream>
using namespace std;

// Now i am goint to learn doubly linked list which is used to store the adrress of next and previus node let see with the exampless....... Insertion at start,insertion at end

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    // Insertion at the start of the linked list ----->

    // Node *head = new Node(900);

    // Node *temp = new Node(500);
    // temp->next = head;
    // head->prev = temp;
    // head = temp;

    // Node *iterate = head;
    // while (iterate != NULL)
    // {
    //     cout << iterate->data << endl;
    //     iterate = iterate->next;
    // }





    // Insertion at the end of the linked list 
    // Node *head=new Node(10);
    // Node *temp=new Node(20);
    // head->next=temp;
    // temp->prev=head;
    // Node *tail=head;
    // while(tail!=NULL){
    //     cout<<tail->data<<endl;
    //     tail=tail->next;
    // }

}