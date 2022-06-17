#include<iostream>
#include<string>
using namespace std;
string reversestring(string str){
  string str1;
  int temp=str.length();
  //cout<<str.length();
  int j=0;
   for(int i=temp-1;i>=0;i--){


    str1[j]=str[i];
    j++;


   }


 return str1;

}
 int main (){
 string str;
 cin>>str;
 cout<<reversestring(str)<<"end";





 }
