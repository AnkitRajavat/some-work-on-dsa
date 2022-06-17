#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*left,*right;
    node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;}
};
node *build(node*root){

  int data;
  cout<<"enter the data:";
  cin>>data;
  root=new node(data);
  if(data==-1)
    return NULL;
    cout<<"enter data for inserting  left  "<<data<<endl;
    root->left=build(root->left);
    cout<<"enter the data inserting of right of"<<data<< endl;

root->right=build(root->right);
return root;


}
void levelorder(node*root){
cout<<"tree travesal:-";
   queue<node*>q;
   q.push(root);
   while(!q.empty()){

    node*temp=q.front();
    cout<<temp->data<<"  ";
    q.pop();

    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
   }


}
int main(){
node*root;

root=build(root);
levelorder(root);


}
