#include <iostream>
using namespace std;
int main()
{   
    int arr[]={1,2,4,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            i++;
        }
        else
        {
            
            break;
        }
    }
    cout<<arr[i];
    return 0;
}