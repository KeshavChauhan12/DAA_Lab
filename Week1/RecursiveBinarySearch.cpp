#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
    {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
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
	    int result = binarySearch(arr, 0, s - 1, num);
	    (result == -1) ? cout << "Element is not present in array"
		  	     	   : cout << "Present " << (result+1);
    }
	return 0;
}

