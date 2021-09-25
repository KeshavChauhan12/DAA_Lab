#include<iostream>
using namespace std;
void findcom(int arr[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while(i < n && j<m)
    {
        if(arr[i] == arr2[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }else if(arr[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
}
int main()
{
    int n,m;
    cout<<"Enter size of array_1: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter size of array_2: ";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    findcom(arr,arr2,n,m);
    cout<<endl;
}
