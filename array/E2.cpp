#include <iostream>
using namespace std;
void Secndlargest(int arr[], int n)
{

    int key = arr[0];
    int temp;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > key)
        {
            temp = key;
            key = arr[i];
        }
        else if (arr[i] < key && arr[i] > temp)
        {
            temp = arr[i]; // Update second largest
        }
    }

    cout << "secondlargest " << temp<<" ";
    return ;
}

void Secndsmallest(int arr[], int n)
{

    int key = arr[0];
    int temp;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < key)
        {
            temp = key;
            key = arr[i];
        }
        else if (arr[i] > key && arr[i] < temp)
        {
            temp = arr[i]; // Update second smallest
        }

    }


    cout << "secondsmallest " << temp;
    return ;
}

int main()
{
    int arr[] = {7, 5, 9, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Secndlargest(arr,n);
    Secndsmallest(arr,n);
    return 0;
}