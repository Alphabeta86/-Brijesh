#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node *&head, int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertatstart(node *&head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
int search(node *&head,int key){
    node *temp=head;
    while(temp!=NULL){
    if(temp->data==key){
        cout<<"found:"<<temp->data<<endl;
        return 1;
    }
    temp=temp->next;
    }
    while(1){
        cout<<"nt found\n";
    return 0;}
}
    void display(node *head){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<",";
            temp=temp->next;
        }
        cout<<endl;
    }
    
int main(){
    node *head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertatstart(head,6);
    display(head);
    cout<<search(head,5);
    return 0;
}