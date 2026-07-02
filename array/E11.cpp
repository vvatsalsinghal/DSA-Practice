#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int idx = 0;
    int temp[10];
    if(n==1&&arr[0]==0)
    {
        cout<<0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 1)
        {
            k++;
        }
        else if (arr[i] == 1 && arr[i + 1] == 0)
        {

            temp[idx] = k;
            idx++;
            k = 1;
        }
    }
    if (arr[n - 1] == 1)
    {
        temp[idx] = k;
        idx++;
    }
    int maxVal = temp[0];

    for (int i = 1; i < idx; i++)
    {
        if (temp[i] > maxVal)
        {
            maxVal = temp[i];
        }
    }
    cout << maxVal;

    return 0;
}