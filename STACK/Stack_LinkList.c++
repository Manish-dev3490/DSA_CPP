#include<iostream>
using namespace std;


// In this i am implementing stack using linked list and performing operations llike push,pop,size,epmty,peek

class Node{
    public:
    int data;
    Node *next;
    
    Node(int value){
        data=value;
        next=NULL;
    }
};

class stack{
    Node *top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;
    }

    void push(int value){

        Node *temp=new Node(value);
        temp->next=top;
        top=temp;
        size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
        }

        else {
            Node *temp=top;
            top=top->next;
            delete temp;
        }
    }


};


int main(){
    
}