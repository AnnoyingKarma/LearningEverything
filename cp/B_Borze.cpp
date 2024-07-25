#include <iostream>
using namespace std;

int main()
{
// 0 is .
// 1 is -.
// 2 is --
string s;
cin>>s;
for(int i=0; i<size(s); i++)
{
    if(s[i]=='.') cout << 0;
    else if(s[i]=='-' && s[i+1] == '.') cout << 1, i++;
    else cout << 2, i++; 
}
cout << "\n";
}