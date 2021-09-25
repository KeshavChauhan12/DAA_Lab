#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int l, int r)
{
    int pv = arr[r];
    int i = l-1;
    for(int j=l;j<=r-1;j++)
    {

        if(arr[j] < pv)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return (i+1);
}
int kth(int arr[], int l,int r,int k)
{
    if(l<r)
    {
        int p = pivot(arr,l,r);
        if(k == p)
        {
            return arr[p];
        }
        else if(p < k)
        {
            return kth(arr,p+1,r,k);
        }
        else
        {
            return kth(arr,l,p-1,k);
        }
    }
}
int main()
{
    int t;
    cout<<"Enter no of test cases: ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter size of array: ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        cout<<"K th largest : "<<kth(arr,0,n-1,k-1)<<endl;
    }
}
