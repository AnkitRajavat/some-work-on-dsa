// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int fun(string s, int k, int n, char c) {
    int t=s.length();
    int l=t*k;
    int i=0,j=0,count=0;
    string a;
    for(i=0;i<l;i++){
        if(j<t){
            a[i]=s[j];
            j++;
        }
            else {
            j=0;
            continue;}
        }

    }
    int p=0;
    while(p<n){
        if(a[p]==c){
            count++;
        }
        p++;
    }
    return count;
    }
};

// { Driver Code Starts.
int main() {
    int t, i, n, k;
    char c;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cin >> k >> n >> c;
        Solution ob;
        cout << ob.fun(s, k, n, c) << endl;
    }
    return 0;
}
  // } Driver Code Ends
