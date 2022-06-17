#include<iostream>
#include<malloc.h>
#include<stdio.h>
 using namespace std;

 struct  node{
     struct node *prev;
 int data;
 struct node *next;

 } *newnode,*temp,*head=NULL;
 void create_doubly(){
 int k;
 do{
 newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"enter the data in linked list-  ";
 cin>>newnode->data;

 if(head==NULL){
    temp=newnode;
    head=newnode;
    newnode->next=NULL;
    newnode->prev=NULL;
 }
 else{
    temp->next=newnode;
    temp=newnode;
newnode->prev=temp;
 }


 cout<<"you wanna to make another node press 1  :";
 cin>>k;
 }while(k!=0);
 //cout<<head->data;
 cout<<"\n";
 }
 void display(){
     cout<<"this  is doubly linked list data-";
 temp=head;
 while(temp!=NULL){
        cout<<temp->data<<"   ";
    temp=temp->next;
 }
 cout<<"\n";
 }
void insert_in_begin(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data ";
    cin>>newnode->data;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
}
void insert_in_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data ";
    cin>>newnode->data;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    newnode->prev=temp;

}
 int main(){

   create_doubly();
   display();
   //insert_in_begin();
   insert_in_end();
   display();

   return 0;
 }
