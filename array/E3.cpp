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
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {9,10,15,7,16};
//     int n = 5;
//     int k;

//     for(int i = 0; i < n-1; i++)   // fixed bound
//     {
//         if(arr[i] > arr[i+1])
//         {
//             k = i;   // removed redeclaration
//             break;
//         }
//     }

//     for(int j = k+1; j < n-1; j++)   // fixed bound
//     {
//         if(arr[j] > arr[j+1])
//         {
//             cout << 0;   // false
//             return 0;
//         }
//     }

//     if(k!=0 && arr[n-1]>arr[0])
//     {
//         cout<<0;
//         return 0;
//     }

//     cout << 1;   // true
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Fix 1: Correct C++ array syntax
//     int arr[] = {2,1,3,4};
//     int temp = arr[0];
//     int key = arr[0];
//     int j = 0; // Fix 2: Initialize j so it can be safely used later
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > temp || arr[i] == temp)
//         {
//             temp = arr[i];
//         }
//         else if (arr[i] < temp && arr[i] > key)
//         {
//             cout << "False" << endl; // Added print statement
//             return 0; // Fix 3: Return int instead of boolean
//         }
//         else if (arr[i] < key) // Fix 4: Changed 'else' to 'else if'
//         {
//             temp = arr[i];
//             j = i; // Fix 5: Removed 'int' to update the outer 'j' instead of creating a new one
//             break;
//         }
//     }

//     for (int i = j; i < n; i++)
//     {
//         if (arr[i] > temp || arr[i] == temp)
//         {
//             temp = arr[i];
//         }
//         else if (arr[i] < temp ) // Fix 6: Changed 'else' to 'else if'
//         {
//             cout << "False" << endl; // Added print statement
//             return 0; 
//         }
//     }
    
//     cout << "True" << endl; // Added print statement
//     return 1; 
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 3, 4};
    int temp = arr[0];
    int key = arr[0];
    int j = -1; // Fix 1: Initialize to -1 to track if the break actually occurred
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > temp || arr[i] == temp)
        {
            temp = arr[i];
        }
        else if (arr[i] < temp && arr[i] > key)
        {
            cout << "False" << endl; 
            return 0; 
        }
        else if (arr[i] < key) 
        {
            temp = arr[i];
            j = i; 
            break;
        }
    }

    // Fix 2: Only run the second loop if the first loop actually hit the 'break'
    if (j != -1) 
    {
        for (int i = j; i < n; i++)
        {
            // Fix 3: Changed '=' to '==' comparison
            if (arr[i] > temp || arr[i] == temp) 
            {
                temp = arr[i];
            }
            // Fix 4: Restored clean logic constraint check
            else if (arr[i] < temp) 
            {
                cout << "False" << endl; 
                return 0; 
            }
        }
        if (temp > key)
        {
            cout << "False" << endl;
            return 0;
        }
    }
    
    cout << "True" << endl; 
    return 1; 
}

