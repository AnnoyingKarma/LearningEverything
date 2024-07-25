#include <iostream>
using namespace std;

int main()
{
    string s;
    int n,x=0; cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="++X"||s=="X++") x++;
        if(s=="--X"||s=="X--") x--;
    }
    cout << x;
}