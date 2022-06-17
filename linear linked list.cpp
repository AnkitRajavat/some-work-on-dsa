#include<iostream>
#include<stdio.h>
 #include<malloc.h>
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
    cout<<"these are linked list data ";
     while(temp!=NULL){
    cout<<temp->data<<"   ";
    temp=temp->next;

}
cout<<"\n";

}
void ins_at_begin(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<" enter the data in begin in the  linked list ->:";

        cin>>newnode->data;


        newnode->next=head;
        head=newnode;
        cout<<"these data after the modification :\n";

}
void ins_at_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<" enter the data in end in the  linked list ->:";

        cin>>newnode->data;


        newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL){

      temp=temp->next;
    }
    temp->next=newnode;

        cout<<"these data after the modification :\n";

}
 void ins_at_position(){
 int pos,i=1;
 newnode=(struct node*)malloc(sizeof(struct node));
 cout<<" enter the postion of which wanna to change ->:";

        cin>>pos;
    if(pos>count){
        cout<<"invalid postion";
    }
else{

    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }}
cout<<" enter the data in position of the  linked list ->:";

        cin>>newnode->data;
        newnode->next=temp->next;
        temp->next=newnode;

        cout<<"these data after the modification :\n";


 }

 //we delete the node of first postionn ok sir
   void  del_at_begin(){
      temp=head;
      head=temp->next;
      free(temp);
}
 void  del_at_end(){
     struct node *prt;
      temp=head;
      while(temp->next!=NULL){
            prt=temp;
        temp=temp->next;
      }
      prt->next=NULL;
      free(temp);
}

      void reverse_linked_list(){

struct node *prev=NULL;

         temp=head;
         while(temp!=NULL){
           struct node *cur= temp->next;

            temp->next=prev;
            prev = temp;
            temp=cur;
 }
head= prev;
}
       struct  node *reverse_linked_list_by_recursive(struct node *head)
       {
           if((head == NULL)||(head->next == NULL)){
            return head;
           }
           struct  node * newnode=reverse_linked_list_by_recursive(head->next);
           struct  node * headnext=head->next;
           head->next->next=head;
           head->next=NULL;
           return newnode;

       }


  struct  node *recursive_display(struct  node *head){
temp=head;
cout<<"these are linked list data ";
while(temp!=NULL){
    cout<<temp->data<<"   ";
    temp=temp->next;

}
cout<<"\n";
 return 0;
}
struct node * middle_element(struct node*head){
//temp=head;
//cout<<"this is middle element-";
struct node*slow=head;
struct node*fast=head;
while((fast!=NULL)&&(fast->next!=NULL)){
    fast=fast->next->next;
    slow=slow->next;
}
//cout<<"  "<<slow->data;
return slow;
}
 string palidrome(struct node*head){
if(head==NULL){
    return "true";
}
else {
    struct node *mid=middle_element(head);
    struct node *last =reverse_linked_list_by_recursive(mid->next);
     temp =head;
     while(last!=NULL){
        if(last->data!=temp->data)
            return "false";
        last=last->next;
        temp=temp->next;
     }
}
return "true";
}
  int main(){
      //struct node *paloo;
      create_ll();
      //struct  node *display(struct  node *head);
     // ins_at_begin();
        display( );
        //middle_element(head);
      //ins_at_end();
      //display();
      //ins_at_position();
      ///display();
      //del_at_begin();
      //display();
      //del_at_end();
     // display();
       //reverse_linked_list();
       string t=palidrome(head);
       cout<<t;

      // paloo=reverse_linked_list_by_recursive(head);
       //struct  node *recursive_display(struct  node *head);
      //display(paloo);
      //int p;
      //cout<<"enter the option which u want ";
  }
