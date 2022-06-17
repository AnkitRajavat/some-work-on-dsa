#include<iostream>
#include<malloc.h>
#include<stdio.h>
 using namespace std;

 struct  node{
 int data;
 struct node *next;
 } *newnode,*temp,*head=NULL;
 void create_circular(){
 int k;
 do{
 newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"enter the data in linked list-  ";
 cin>>newnode->data;

 if(head==NULL){
    temp=newnode;
    head=newnode;
    newnode->next=NULL;
 }
 else{
    temp->next=newnode;
    temp=newnode;

 }
 temp->next=head;

 cout<<"you wanna to make another node press 1  :";
 cin>>k;
 }while(k!=0);
 cout<<head->data;
 cout<<"\n";
 }
 void display(){
     cout<<"this  is circular linked list data-";
 temp=head;
 while(temp->next!=head){
        cout<<temp->data<<"   ";
    temp=temp->next;
 }
 cout<<temp->data<<" "<<"\n";
 }
void insert_in_begin(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data ";
    cin>>newnode->data;
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head->next;
head=newnode;
}
void insert_in_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data ";
    cin>>newnode->data;
    temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
 int main(){

   create_circular();
   display();
  // insert_in_begin();
   insert_in_end();
   display();

   return 0;
 }
