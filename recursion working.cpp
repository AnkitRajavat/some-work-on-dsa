#include<iostream>
using namespace std;
void rec(int i){
    if(i<10){
 //cout<<i<<endl;
  rec(i-1);
   cout<<i<<endl;}

 /*cout<<i<<endl;
 if(i<10){
 rec(i+1);
 cout<<i<<endl;}
*/
}
 int main(){
 rec(5);
 return 0;


 }
