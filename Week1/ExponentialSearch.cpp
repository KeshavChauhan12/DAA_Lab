#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int, int, int);
int exponentialSearch(int arr[], int n, int x)
{
	if (arr[0] == x)
		return 0;
	int i = 1;
	while (i < n && arr[i] <= x)
		i = i*2;
	return binarySearch(arr, i/2,min(i, n-1), x);
}
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid-1, x);
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}
int main(void)
{
    int n, size, i, j, s, num;
	cout<<"Enter no of test cases: ";
	cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nSize : ";
        cin>>s;
        int arr[s];
        for(j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        cout<<"\nEnter a Number to Search: ";
        cin>>num;
        int result = exponentialSearch(arr, s, num);
	    (result == -1) ? cout << "Element is not present in array"
		  	     	   : cout << "Present " << (result+1);
    }
    return 0;
}

