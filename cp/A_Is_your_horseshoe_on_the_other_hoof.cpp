#include <iostream>
#include <set>
using namespace std;

int main()
{

    set <int> s;
    int n;
    while(cin>>n) s.insert(n);
    cout << 4-s.size();

}