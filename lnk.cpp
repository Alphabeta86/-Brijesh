#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void insertionattail(struct node *&n,int newdata){
    struct node *newnode=new node;
    newnode->data=newdata;
    if(n==NULL){
        newnode=n;
        return;
    }
    
    struct node *temp=n;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}
void display(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
}
int main(){
    struct node *head=NULL;
    insertionattail(head,1);
    insertionattail(head,2);
    insertionattail(head,3);
    insertionattail(head,55);
    insertionattail(head,6);
    insertionattail(head,99);
    display(head);
    return 0;
    
}