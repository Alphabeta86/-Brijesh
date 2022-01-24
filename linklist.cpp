#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *newnode;
void insert(int newdata){
    newnode=(struct node*)(malloc(sizeof(struct node)));
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
}
void display(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

int main(){
    struct node arr[10];
    for(int i=0;i<0;i++){
    cin>>arr[i].data;
    insert(arr[i].data);
    }
    insert(45);
    insert(9);
    display();
    
}