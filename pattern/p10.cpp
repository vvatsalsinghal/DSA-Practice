#include <iostream>
using namespace std;

int main()
{
    int x;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            int x = 1;
            for (int j = 1; j <= i; j++)
            {
                x = (1 - x);
                cout << x;
            }
        }
        else
        {
            int x = 0;
            for (int j = 1; j <= i; j++)
            {
                x = (1 - x);
                cout << x;
            }
        }
        cout << endl;
    }
    return 0;
}