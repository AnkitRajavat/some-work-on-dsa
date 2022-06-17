// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{

        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{

     int ab[n],a=arr[n-1];

    for(int i=0;i<n;++i)
    {
        ab[i]=arr[i];


    }for(int i=0;i<n;++i)
    {
       arr[i+1]=ab[i];
       arr[0]=a;
    }

        }




