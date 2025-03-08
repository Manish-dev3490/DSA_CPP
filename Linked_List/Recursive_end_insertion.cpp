#include <iostream>
using namespace std;

// Now i am goint to insert nodes in the end of the linked list using Recursive method but first of all i have to create linked list-So basically linked list is a linear data structure which is used to store the nodes ans in node there is wrapp of data and address of next node so we dont have to remeber next node address

class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    };
};

// making Recursive function for creating linked list
Node* CreateLinkedList(int arr[],int index,int size){
    // If index is equal to size of array which means array is completed then return nulll;
    if(index==size)return NULL;

    else {
        // if index is not equal to size create a node;
        Node *temp=new Node(arr[index]);
        temp->next=CreateLinkedList(arr,index+1,size);
        return temp;
    }
 }


 int main(){
    int arra[4]={2,4,6,8};
    Node *Head=CreateLinkedList(arra,0,4);
    Node *tail=Head;
    while(tail!=NULL){
        cout<<tail->data<<endl;
        tail=tail->next;
    }
 }