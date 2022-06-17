#include<iostream>
//#define MAX 10;

 using namespace std;

   int reversearray(int a[],int i,int n ){
       if(i>=n){
        cout <<"not in proper way ";

       }
else {
     while(i<n){
            n--;
          cout<<a[n]<<" ";


}
}
}
int main(){
   int a[10];
   cout<<"enter the element to reverse"<<"\n";
   for(int i=0;i<10 ;i++){
      cin>>a[i];

   }
  reversearray(a,0,10);


 }
