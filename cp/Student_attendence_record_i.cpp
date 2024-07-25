#include <iostream>
using namespace std;

//absent < 2
//late < 3
// a-absent p-present l-late

int main ()
{
    int cnt1=0, cnt2=0;
    string n; cin >> n;
    for(int i=0; i<n.size(); i++)
    {
        if(n[i]=='P')
        {continue;}
        else if(n[i]=='A')
        {cnt1++;}
        else if (n[i]=='L' && n[i+1]=='L' && n[i+2]=='L')
        {cnt2++;}
    }
    if(cnt1 > 1 || cnt2 > 0) cout << "false";
    else cout << "true";
}