#include<iostream>
using namespace std;
struct node{
 int data;
 struct node*next;

 }*head=NULL,*newnode,*temp,*prev=NULL;
 int count=0;
 void create_ll(){

 int k,j;

 do{
 newnode=(struct node*)malloc(sizeof(struct node));
 cout<<" enter the data in linked list ->:";

 cin>>j ;
 newnode->data=j;
 if(head==NULL){

        head=newnode;
        temp=newnode;
        newnode->next=NULL;
 }
 else{

    temp->next=newnode;
    temp=newnode;
    newnode->next=NULL;

 }

 cout<<" you wanna another node press 1    ";
 cin>>k;
} while(k!=0);
 }

 void display(){
  temp=head;
  struct node *curr=NULL;
    cout<<"these are linked list data ";
     while(temp->next!=NULL){
    cout<<temp->data<<"   ";
    curr=temp;
    temp=temp->next;

}
curr->data=temp->data+1;
cout<<curr->data;

}
  /*void last_to_first_node(){
       temp=head;
       struct node *curr=NULL;
       while(temp->next!=NULL){
        curr=temp;
        temp=temp->next;

       }
       temp->next=head;
       head=temp;
  curr->next=NULL;

  }*/
int main(){
       create_ll();
       display();
      // last_to_first_node();
       //display();
        }
