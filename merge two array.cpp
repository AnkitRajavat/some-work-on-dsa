// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	     int temp, arr3[n+m-1],k=n+m-1;
	    for(int i=0;i<n;i++){
	        arr3[i]=arr1[i];


	        }
	        int t=n;
	        for(int i=0;i<m;i++){
	        arr3[t]=arr2[i];

	            t++;
	        }

	         for(int i=0;i<k;i++){
	         for(int j=i+1;j<k;j++){
	        if(arr3[i]<arr3[j]){

	            temp=arr3[i];
	            arr3[i]=arr3[j];
	            arr3[j]=temp;
	    }
	}
	         }
	         }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";

    return 0;
}  // } Driver Code Ends
