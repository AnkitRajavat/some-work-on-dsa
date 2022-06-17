#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);
int duplicate(int a[],int n);
int main()
{

        int n,p;
        cout<<"enter ther aarray size";
        scanf("%d",&n);
        int a[n] , i;
        cout<<"enter the element of the array ";
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         duplicate(a, n);

           /* printf("this is number of duplicate =  %d ",a[i] );
        printf("\n");
    */}

// } Driver Code Ends


//User function Template for C++

int duplicate(int arr[], int n)

{
    int temp=0 ,b[n],j=0;
    for(int i=0;i<n;i++){

    b[i]=arr[i];
    }
             j=0;
            for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){

        if( b[i] ==arr[j])
            {


      cout<<"duplicate number is ="<<arr[j];


        }
            }

}

}


