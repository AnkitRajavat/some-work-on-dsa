#include<iostream>
using namespace std;
 int main(){

 int a[5],b[5],i,j,temp=0;
 cout<<"enter the 5 element - ";
 for(i=0;i<5;i++){

    cin>>a[i];

    }
       for (i = 0; i < 5; ++i)
        {

            for (j = i + 1; j < 5; ++j)
            {
            if(a[i]>a[j]){

            temp = a[i];
            a[i]=a[j];

            a[j]=temp;


    }
    }
    }
     for(i=0;i<5;i++){

     cout<< a[i]<<" \n";
     }
     }
