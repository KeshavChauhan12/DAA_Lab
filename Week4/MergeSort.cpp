#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int l, int r,int m,int &c,int &in)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int lf[n1],ri[n2];
    for(int i=0;i<n1;i++)
    {
        lf[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        ri[i] = arr[i+1+m];
    }

    int i=0,j=0,k=l;
    while(i < n1 && j < n2)
    {
        c++;
        if(lf[i] <= ri[j])
        {
            arr[k++] = lf[i++];
        }else{
            in += n1-i;
            arr[k++] = ri[j++];
        }
    }
    while(i < n1)
    {

        arr[k++] = lf[i++];
    }
    while(j < n2)
    {
        arr[k++] = ri[j++];
    }
}
void merge_sort(int arr[],int l,int r,int &c,int &in)
{
    if(l<r)
    {
        int m = (l+r)/2;
        merge_sort(arr,l,m,c,in);
        merge_sort(arr,m+1,r,c,in);
        merge(arr,l,r,m,c,in);
    }
}
int main()
{
    int t;
    cout<<"Enter no of test cases: ";
    cin>>t;
    while(t--)
    {
        int n,c=0,in=0;
        cout<<"Enter size of array: ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        merge_sort(arr,0,n-1,c,in);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons :"<<c<<endl;
        cout<<"Inversions :"<<in;
        cout<<endl;
    }
}
