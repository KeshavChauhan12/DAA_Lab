#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n)
{
    int i,j,min_idx,c=0,s=0;
    for(int i=0;i<n-1;i++)
    {
        min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            c++;
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        s++;
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparison :"<<c;
    cout<<endl<<"Swaps :"<<s<<"\n";

}
int main()
{
    int i,n,s,j;
	cout<<"Enter no of test cases: ";
	cin>>s;
	for(i=0;i<s;i++)
    {
        cout<<"Size: ";
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
	  SelectionSort(arr, n);
    }
	return 0;
}

