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



// This recursive functin is converting array into doubly linked list and inserting nodes into the end 
Node * ConvertLL(int arra[],int index,int size , Node *head,Node *tail){
    if(index==size)return head;
    if(head==NULL){
        head=new Node(arra[index]);
        tail=head;
        return ConvertLL(arra,index+1,size,head,tail);
    }

    else {
        Node *temp=new Node(arra[index]);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
        return ConvertLL(arra,index+1,size,head,tail);
    }
}

// This recursive functin is converting array into doubly linked list and inserting nodes into the start


Node * ConvertLL(int arra[],int index,int size , Node *head){
    if(index==size)return head;
    if(head==NULL){
        head=new Node(arra[index]);
        return ConvertLL(arra,index+1,size,head);
    }

    else {
        Node *temp=new Node(arra[index]);
        temp->next=head;
        head->prev=temp;
        head=temp;
        return ConvertLL(arra,index+1,size,head);
    }
}
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



    // Convrt array into doubly linked listt 
    // int arra[5]={1,2,3,4,5};
    // Node *head=NULL,*tail=NULL;
    // for(int i=0;i<5;i++){
    //     if(head==NULL){
    //         head=new Node(arra[i]);
    //         tail=head;
    //     }

    //     else {
    //         Node *temp=new Node(arra[i]);
    //         temp->prev=tail;
    //         tail->next=temp;
    //         tail=temp;
    //     }
    // }


    // Node *temp=head;
    // while(temp!=NULL){
    //     cout<<temp->data;
    //     cout<<endl;
    //     temp=temp->next;
    // }

    

    // converting array into linked list using recusrion insertion into the end .....
    // int arr[4]={2,4,6,8};
    // Node *head=NULL,*tail=NULL;
    // Node *start=ConvertLL(arr,0,4,head,tail);
    // while(start!=NULL){
    //     cout<<start->data<<endl;
    //     start=start->next;
    // }



    // converting array into linked list using recusrion insertion into the start.....
    // int arra[5]={2,4,6,8,10};
    // Node *head=NULL;
    // for(int i=0;i<5;i++){
    //     if(head==NULL){
    //         head=new Node(arra[i]);
    //     }

    //     else {
    //         Node *temp=new Node(arra[i]);
    //         temp->next=head;
    //         head->prev=temp;
    //         head=temp;
    //     }
    // }
    // Node *tail=head;
    // while(tail!=NULL){
    //     cout<<tail->data<<endl;
    //     tail=tail->next;
    // }



    // converting array into linked list inserting at the start using recursive methodd
    int arra[5]={2,4,6,8,10};
    Node *head=NULL;
    Node *iterate=ConvertLL(arra,0,5,head);
    while(iterate!=NULL){
        cout<<iterate->data<<endl;
        iterate=iterate->next;
    }


}
