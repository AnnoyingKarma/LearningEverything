#include <iostream>
using namespace std;

int main()
{

int n,cnt=0,a=0; cin>>n;
string s; cin>>s;

for(int i=1; i<n; i++)
{
    if(s[a]==s[i])
    {
        cnt++;
    }
    else a=i;
}
cout << cnt << "\n";

}