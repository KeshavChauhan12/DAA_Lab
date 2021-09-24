#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n)
{
    int i,temp,j,s=0,c=0;
    for(int i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        bool flag = true;
        c++;
        while (j >= 0 && arr[j] > temp)
        {

            flag = false;
            c++;
            s++;
            arr[j+1] = arr[j];
            j=j-1;
        }
        if(j == 0)
        {
            c--;
        }
        if(!flag)
        {
            s++;
        }
        arr[j+1] = temp;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparisons : "<<c;
    cout<<endl<<"Shifts : "<<s<<"\n";
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
      InsertionSort(arr, n);
    }
	return 0;
}

