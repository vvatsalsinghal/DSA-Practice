#include<iostream>
using namespace std;
int main()
{ 
    for(int i =1; i<=5;i++)
    {  int count=0;
        for(int j=5;j>=i;j--)
        {
            cout<<char('A'+ count);
            count++;
        }
        cout<<endl;
    }
  return 0;
}