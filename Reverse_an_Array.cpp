// Problem Name: Reverse an Array.

#include<iostream>
using namespace std;
int main()
{
	//code
    int t, n, num, i;
    cout << "Enter the no of test case: ";
    cin >> t;
    while(t--){
        cout << "Enter the size of the array: ";
        cin >> n;
        int arr[n];
        
        cout << "Enter the elements of the array: \n";
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        
        for(i=n-1;i>=0;i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
	return 0;
}