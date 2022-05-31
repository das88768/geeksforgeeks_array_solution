// Problem Name: Cyclically rotate an array by one. 

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
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
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    int temp[n], i, index=0;
    temp[0] = arr[n-1];
    
    for(i=1;i<n;i++){
        temp[i] = arr[index];
        index++;
    }
    
    for(i=0;i<n;i++){
        arr[i] = temp[i];
    }
}