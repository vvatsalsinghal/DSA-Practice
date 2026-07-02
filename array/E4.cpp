#include<iostream>
using namespace std;
int main()
{ int arr[]={0,0,1,1,1,2,2,3,4,4};
   int n = sizeof(arr) / sizeof(arr[0]);
  int k=0;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]!=arr[i+1])
    {
        k++;
    }
  }
  cout<<k;
  return 0;
}