#include <iostream>
using namespace std;

int main()
{
long long cnt=0;
string s;
cin>>s;
for(int i=0; i<s.size(); i++)
{
    if(s[i]==52||s[i]==55)
    {
        cnt++;
    }
}

(cnt==7||cnt==4) ? cout << "YES\n" : cout << "NO\n";
}