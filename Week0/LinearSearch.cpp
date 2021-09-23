#include<iostream>
using namespace std;
int main()
{
    int n, i, num, index, s, j;
    cout<<"Enter no of test cases: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Size : ";
        cin>>s;
        int arr[s];
        for(j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        cout<<"\nEnter a Number to Search: ";
        cin>>num;
        for(i=0; i<10; i++)
        {
          if(arr[i]==num)
          {
            index = i;
            break;
          }
        }
    cout<<"\nPresent "<<(index)+1;
    cout<<endl;
    }
    return 0;
}
