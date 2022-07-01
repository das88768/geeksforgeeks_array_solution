// Problem Name: Alternate positive and negative numbers . 

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int i, j, index;
        int temp[n+1] = {0};
        vector<int> arr_neg, arr_pos;
        for(i=0;i<n;i++){
            if(arr[i] < 0){
                arr_neg.push_back(arr[i]);
            }
            else{
                arr_pos.push_back(arr[i]);
            }
        }

	    i=0, j=0;
	    for(index=0;index<n;index++){
	        if(index%2==0){
	            if(i<arr_pos.size()){
	                arr[index] = arr_pos.at(i);
	                i++;
	            }
	            else{
	                arr[index] = arr_neg.at(j);
	                j++;
	            }
	        }
	        else{
	            if(j<arr_neg.size()){
	                arr[index] = arr_neg.at(j);
	                j++;
	            }
	            else{
	                arr[index] = arr_pos.at(i);
	                i++;
	            }
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends