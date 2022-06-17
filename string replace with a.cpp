#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replac(string a,int n){

for(int i=0;i<n;i++){

    int temp=a[i];
    int temp1=a[i+1];
for(int j=0;j<n;j++){
    if(a[i]!=a[j]){

            a[j]=a[i];

            }
        }

    }


for(int i=0;i<n;i++){
    cout<<a[i];
}

}
int main(){
string a="abacabcb";
replac(a,7);

}
