#include<iostream>
using namespace std;
int main()
{ int arr[]={7,5,9,6,1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]>key)
    {
        key=arr[i];
    }
  }
  
  cout<<key;
  return 0;
}