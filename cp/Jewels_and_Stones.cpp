#include <iostream>
#include <set>
using namespace std;
//User function Template for C++
int main ()
{
    int t,cnt=0; cin>>t;
        set<char> s;

while(t--)
{

string a,b; cin>>a>>b;
s.clear();
    for (int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(a[i]==b[j])
            {
                s.insert(a[i]);
            }
        }
    }
    cout << s.size() <<"\n";
}
}