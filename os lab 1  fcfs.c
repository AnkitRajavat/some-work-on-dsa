#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int at[]={0,1,2,3,4},bt[]={4,3,1,2,5},ct[4],wt[4],i,n;
    for(i=1;i<5;i++){

        ct[0]=ct[0]+bt[0];
        ct[i]=ct[i-1]+bt[i];
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];

    }
cout<<"waiting time is --/n";
for(i=0;i<5;i++){
    cout<<"  "<<wt[i];
}
out<<"turn around  time is --/n";
for(i=0;i<5;i++){
    cout<<"  "<<tat[i];
}
}
