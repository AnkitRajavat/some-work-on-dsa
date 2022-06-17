#include<iostream>
using namespace std;
 int main(){

 int a[5],b[5],i,j,p,temp=0;
 cout<<"enter the 5 element - ";
 for(i=0;i<5;i++){

    cin>>a[i];

    }
       for (i = 0; i < 5; ++i)
        {

            for (j = i + 1; j < 5; ++j)
            {
            if(a[i]<a[j]){

            temp = a[j];
            a[j]=a[i];

            a[i]=temp;


    }
    }
    }
    cout<<"kth element  you entered -";
    cin>>p;
    cout<<" this is Kth miximum  element -"<<"\n";
    cout<< a[p-1]<<" \n";
     cout<<" this is Kth minimum  element -"<<"\n";
    cout<< a[5-p]<<" \n";
 }
