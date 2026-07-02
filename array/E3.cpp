/*#include<iostream>
using namespace std;
int main()
{ int arr[]={3,4,5,2,1};
  int n=5;
  int k;
  for( int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
         k =i;
        break;
    }
    else{
        cout<< true;
        return 0;
    }
  }
  for(int j=k+1;j<n-1;j++)
  {
    if(arr[j]>arr[j+1])
    {
        cout<< false;
        return 0;
    }
    else{
        cout<< true;
        return 0;
    }
  }
  return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {9,10,15,7,16};
    int n = 5;
    int k;

    for(int i = 0; i < n-1; i++)   // fixed bound
    {
        if(arr[i] > arr[i+1])
        {
            k = i;   // removed redeclaration
            break;
        }
    }

    for(int j = k+1; j < n-1; j++)   // fixed bound
    {
        if(arr[j] > arr[j+1])
        {
            cout << 0;   // false
            return 0;
        }
    }
    
    if(k!=0 && arr[n-1]>arr[0])
    {
        cout<<0;
        return 0;
    }

    cout << 1;   // true
    return 0;
}