#include <iostream>
using namespace std;

// So assume i have to store the data 1,2,3 without arrays how will i store it - i will store that in linked list--->Linked list is a linear data structure which is used for store the data with next data adress in node let us begin with the linked list.Now i want the data and address of next data together so i will use class let us see how to define linked list

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int main()
{
    // Now i have initilaized a linkest list now iam goint t create a node in the below following lines of the code first look how statically we create nodes in stack memory
    // Node Head(10);
    // Now this will create an object in the stack memory with propertiy data:10,next:null but in linked list we only allocate dynamically because we dont know how many nodes we have to use so stack have less memory thatswhy we prefer dynamuically memory allocation in heap



    // Now we will see how dynamically node creates in the heap memory ---> Now Node(10) will create a object in heap memory with data:10,next:null and this will return us a adress of Head object in the heap and we are reciving address of head bject which is type of Node class;
    Node *Head=new Node(10);
    cout<<"data is "<<Head->data;
    cout<<endl;
    cout<<"next node address is "<<Head->next;

}