#include <iostream>
using namespace std;

int main()
{
 int count;
    for (int i = 1; i <= 5; i++)
    {   int count=0;
        for (int j = 1; j <= i; j++)
        {
            cout << ++count;
        }
        cout << endl; // move to next line
    }
    return 0;
}