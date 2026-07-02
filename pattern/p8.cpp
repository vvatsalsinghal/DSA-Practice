#include <iostream>
using namespace std;

int main()
{
 
    for (int i = 1; i <= 5; i++)
    {    for( int p=1; p<=5-i;p++)
        {
            cout<<" ";
        }
        for(int q=1; q<= i*2-1;q++ )
        {
            cout<<"*";
        }
         for( int s=1; s<=5-i;s++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 5; i >= 1; i--)
    {    for( int p=1; p<=5-i;p++)
        {
            cout<<" ";
        }
        for(int q=1; q<= i*2-1;q++ )
        {
            cout<<"*";
        }
         for( int s=1; s<=5-i;s++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}