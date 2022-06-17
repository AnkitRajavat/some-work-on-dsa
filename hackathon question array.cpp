#include<iostream>

using namespace std;
int main (){

int t;
cin>>t;
int a[t],i,j,b[t],temp=0,sum=0;
for(i=0;i<t;i++){
    cin>>a[i];
    b[i]=a[i];

}
for(i=0;i<t;i++){
    for(j=1;j<t;j++){

        temp=temp+a[i];
    sum=sum+b[j];
    }
}
if(temp>sum )
    cout<<"1";
else if(temp<sum)
    cout<<"0";


}
