#include<iostream>
using namespace std;
#include<vector>

// How to create a linked list in which data wrapped together with next node addresss
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    vector<int>arr={1,2,3,4};

    // Now my task is to insert all the elements of the array into the linked list from starting output should be  4 3,2 1...
     Node *Head;
     Head=NULL;
     for(int i=0;i<arr.size();i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
        }

        else {
            Node *Temp;
            Temp=new Node(arr[i]);
            Temp->next=Head;
            Head=Temp;
        }
     }

    //  This below for loop will create my linked list for me nw i am going to traversal my linked list to check if it is created or not 
    Node *Temp=Head;
    while(Temp!=NULL){
        cout<<Temp->data<<endl;
        Temp=Temp->next;
    }

}