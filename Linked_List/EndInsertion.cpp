#include <iostream>
using namespace std;

// In this code file i am going to insert a node in the end of the linked list let us see first of al we have to create a create a linked list so basically a linked list is a linear data structure which is used to store the data along with next node address so we will use class which wrapps the data member in the single entity.....

class Node
{
public:
    int data;
    Node *next;

    // constructor for initializing the valuesss
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    // output of the linked list should be 2 4 6 8 10..........
    Node *Head=NULL;
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *tail = Head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            Node *Temp = new Node(arr[i]);
            tail->next = Temp;
        }
    }

    //  traversal the linked list to check if it is created or not
    Node *iterate = Head;
    while (iterate!= NULL)
    {
        cout << iterate->data << endl;
        iterate=iterate->next;
    }
}