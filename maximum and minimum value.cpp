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
    cout<<" this is minimum value  -"<<"\n";


    cout<< a[0]<<" \n";
      cout<<" this is miximum value  -"<<"\n";
    cout<< a[4]<<" \n";

 }

