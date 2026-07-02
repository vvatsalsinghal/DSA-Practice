#include <iostream>
#include <vector>
using namespace std;
int main()

{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    cout<<vec.capacity()<<endl;
    cout << vec.size() << endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}