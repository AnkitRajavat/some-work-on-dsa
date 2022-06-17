#include<iostream>
using namespace std;
#include<conio.h>

int  main(){
int var[5]= {10,3,4,3,5};
   int (**a)[5]=&var;
    **a[2]=&var[2];
    // a[1]=&var[1];
    cout<<**a[2]<<" ";
    cout<<&var[2];
   /* for(int i =0;i<5;i++){
        *a[i]=var[i];
        cout<<a[i]<<" "<<var[i];
    }
    cout<<"\n";*/

    //int (*p)((int (*)[2],int *void) )

    //a[0]=&var[0];
    //a[1]=&var[1];
    //a[2]=&var[2];
    //cout<<a<<" "<<*a<<" "<<&var;
    //cout<<a[1];

}
