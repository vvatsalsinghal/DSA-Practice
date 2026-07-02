#include <iostream>
using namespace std;

int main()
{
 int count;
    for (int i = 1; i <= 5; i++)
    {    
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl; // move to next line
    }
    return 0;
}