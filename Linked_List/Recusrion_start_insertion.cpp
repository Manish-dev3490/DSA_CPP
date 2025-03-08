#include<iostream>
using namespace std;

// Now i am going to insert ndes in the begining of the linked list.....

class Node{
    public:
    int data;
    Node *next;


    Node(int val){
        data=val;
        next=NULL;
    }
};


Node* CreateLinkedList(int *arr,int index,int size,Node *address){
    if(index==size) return address;
    else {
        Node *temp=new Node(arr[index]);
        temp->next=address;
        return CreateLinkedList(arr,index+1,size,temp);

    }
}


int main(){
    int arr[5]={1,2,3,4,5};
     Node *Head=CreateLinkedList(arr,0,5,NULL);
     Node *tail=Head;
     while(tail!=NULL){
        cout<<tail->data<<endl;
        tail=tail->next;
     }
}