#include<iostream>
using namespace std;
 #define Max 10
  int arr[Max];
  int top=-1;


 void  push(){
     int t;
     cout<<"enter the data:";
     cin>>t;
   if(top==Max-1){
        cout<<"stack overflow";
   }
   else{
    ++top;
    arr[top]=t;
   }}
   void  pop(){

   if(top==-1){
        cout<<"stack underflow";
   }
   else{
    --top;
cout<<"pop perform";
   }
   }
   void  peek(){

   if(top==-1){
        cout<<"stack under flow";
   }
   else{

    cout<<arr[top];
   }


   }
 void display(){

for(int i=0;i<=top;i++){
    cout<<arr[i] <<endl;

 }


 }

int main(){

int t,p;
cout<<"how much time to perform the operation:";
cin>>p;
while(p--){
        cout<<"enter the option: 1-push ,2-pop,3-peek,4-display ";
cin>>t;
switch(t){
 case 1:

     push();
     break;
 case 2:
    pop();
    break;
    case 3:
    peek();
    break;
    case 4:
    display();
    break;
 default:
    cout<<"this is wrong input ";
}


}

return 0;
}
