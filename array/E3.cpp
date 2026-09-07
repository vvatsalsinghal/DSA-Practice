

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

