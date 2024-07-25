#include <iostream>
using namespace std;

int main()
{

string n,m,s;
cin>>n>>m;
for(int i=0; i<n.size(); i++)
{
    char c=((n[i]-'0')^(m[i]-'0'))+'0';
    s+=c;
}
    cout << s;
}