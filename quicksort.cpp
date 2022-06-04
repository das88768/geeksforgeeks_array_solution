// Problem Name: Quick Sort. 

// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        int pindex;
        if(low < high){
            pindex = partition(arr, low, high);
            quickSort(arr, low, pindex-1);
            quickSort(arr, pindex+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high){
        // Your code here
        int left = low, right = high;
        int pindex = left, flag = 0;
   
        while(flag != 1){
            while(arr[pindex] <= arr[right] && pindex != right){
                right = right - 1;
            }
            if(pindex == right){
                flag = 1;
            }
            else if(arr[pindex] > arr[right]){
                swap(arr[pindex], arr[right]);
                pindex = right;
            }
            if(flag != 1){
                while(arr[pindex] >= arr[left] && pindex != left){
                    left = left + 1;
                }
                if(pindex == left){
                    flag = 1;
                }
                else if(arr[pindex] < arr[left]){
                    swap(arr[pindex], arr[left]);
                    pindex = left;
                }
            }
       }
       return pindex;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends