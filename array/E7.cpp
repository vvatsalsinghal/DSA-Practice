#include<iostream>
using namespace std;
int main()
{ int arr[]={0,1,0,2,0,3};
     int n = sizeof(arr) / sizeof(arr[0]);
     int i=0;
     int j=1;
     for(int j=1;j<n;j++)
     {  
        if(arr[j]!=0 && arr[i]==0 && j>i)
        {
            swap(arr[i],arr[j]);
            i++;
        }
        else if( arr[i]!=0)
        {
            i++;
        }
     }
     for(int k=0;k<n;k++)
     {
        cout<<arr[k]<<" ";
     }
  return 0;
}