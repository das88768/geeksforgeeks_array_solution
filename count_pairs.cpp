// Problem Name: Count pairs with given sum. 

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int sum, count=0, i, j;
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int b=k-arr[i];
            if(b < 0){
                continue;
            }
            if(m[b])
            ans+=m[b];
           
            m[arr[i]]++;

        }
       
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends