#include <bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int x, int low, int high)
{
  while (low <= high)
    {
         int mid = low + (high - low) / 2;
         if (array[mid] == x)
            return mid;
         if (array[mid] < x)
            low = mid + 1;
         else
            high = mid - 1;
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
        int result = binarySearch(arr, num, 0, s - 1);
        (result == -1) ? cout << "Element is not present in array"
		  	     	   : cout << "Present " << (result+1);
    }
    return 0;
}
