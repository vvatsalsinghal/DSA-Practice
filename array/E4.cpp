// #include<iostream>
// using namespace std;
// int main()
// { int arr[]={0,0,1,1,1,2,2,3,4,4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//   int k=0;
//   for(int i=0;i<n-1;i++)
//   {
//     if(arr[i]!=arr[i+1])
//     {
//         k++;
//     }
//   }
//   cout<<k;
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4} int arr[1];
//   int k = 0;
//   int temp = arr[1];
//   for (int i = 1; i < n; i++)
//   {
//     if (arr[i] != = temp)
//     {
//       temp = arr[i];
//       arr[k + 1] = arr[i];
//       k++;
//     }
//   }
//   return k;
//   retrun arr;
// }
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;
    int temp = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != temp)
        {
            temp = arr[i];
            arr[k + 1] = arr[i];
            k++;
        }
    }

    cout << "k: " << k + 1 << endl;
    cout << "arr: ";
    for(int i = 0; i < k + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}