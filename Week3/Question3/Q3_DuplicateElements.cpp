#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k, i, s, n, j;
  cout<<"Enter no of test cases: ";
  cin>>s;
  for(k=0;k<s;k++)
  {
     cout<<"Size: ";
     cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     for(i=0; i<n; i++)
     {
         for(j=i+1;j<n;j++)
         {
            if(arr[i]==arr[j])
            {
                cout<<"Yes"<<endl;
            }
         }
     }

  }
  return 0;
 }
