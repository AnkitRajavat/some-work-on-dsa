// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){




if(n==1&&arr[0]==0){
           return 0;
       }
       if(arr[0]==0){
           return -1;
       }
       if(arr[0]>=n-1){
           return 1;
       }
       else{
           int count = 1;
           int i=0;
           int m=arr[0];
           while(m!=0){
               if(i+m>=n-1){
                   return count;
               }
               else{
                   int t=m;
                   int max=0,ele,k;
                   while(t--){
                       i++;
                       if(max<=i+arr[i]){
                           max=i+arr[i];
                           ele=arr[i];
                           k=i;
                       }
                   }
                   i=k;
                   m=ele;
               }
               count++;
           }
       }
       return -1;

   }
};


// { Driver Code Starts.

int main()
{

        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;

    return 0;
}
  // } Driver Code Ends
