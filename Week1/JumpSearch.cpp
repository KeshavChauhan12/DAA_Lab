#include <bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int x, int n)
{
	int step = sqrt(n);
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	while (arr[prev] < x)
	{
		prev++;
		if (prev == min(step, n))
			return -1;
	}
	if (arr[prev] == x)
		return prev;
    return -1;
}
int main()
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
	    int result = jumpSearch(arr, num, s);
	    (result == -1) ? cout << "Element is not present in array"
		  	     	   : cout << "Present " << (result+1);
    }
    return 0;
}



