#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        int count = i - 1;   // key change

        for(int j = 1; j <= i; j++)
        {
            cout << char('E' - count) << " ";
            count--;
        }

        cout << endl;
    }

    return 0;
}