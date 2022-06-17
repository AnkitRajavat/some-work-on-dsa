#include<iostream>
#include<string>
using namespace std;
int main(){

 string s;
 cin>>s;
 for(int i =0;i<s.length();i++){

   int count = s[i];
   int temp=count-97;
   int k=122-temp;
   s[i]=k;
   cout<<s[i];

 }


}
