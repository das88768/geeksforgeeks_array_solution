// Problem Name: Subarrays with equal 1s and 0s.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        int i, val, sum;
        unordered_map<int, int> mp;
        for(i=0;i<n;i++){
            if(arr[i] == 0)
            arr[i] = -1;
        }
        
        val = 0;
        sum = 0;
        mp[0]++;
        for(i=0;i<n;i++){
            sum = sum + arr[i];
            if(mp.find(sum) != mp.end()){
                val = val + mp[sum];
                mp[sum]++;
            }
            else{
                mp[sum]++;
            }
        }
        return val;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends