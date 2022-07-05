// Problem Name: Factorials of large numbers.

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>vt;
        int i, x, carr, val;
        
        vt.push_back(1);
        for(x=2;x<=N;x++){
            carr = 0;
            for(i=0;i<vt.size();i++){
                val = vt[i] * x + carr;
                vt[i] = val % 10;
                carr = val / 10;
            }
            while(carr != 0){
                vt.push_back(carr%10);
                carr = carr / 10;
            }
        }
        reverse(vt.begin(), vt.end());
        return vt;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends