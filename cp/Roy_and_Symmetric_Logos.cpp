#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int t,n,cnt; cin>>t; string s,ss,r,rr; char e;
    while(t--)
    {
        cin>>n;
        s.clear();
        cnt=0;
        for(int i=0; i<n; i++)
        {
        for(int i=0; i<n; i++)
        {
            cin>>e;
            s.push_back(e);
            ss.push_back(e);
        }
        rr=ss;
        reverse(rr.begin(),rr.end());
        if(rr!=ss)
        {cnt++;}
        ss.clear();
        rr.clear();
        }
        r=s;
        reverse(r.begin(),r.end());
        if(cnt>0)
        {cout << "NO" << "\n";}
        else if(r==s)
        { cout << "YES" <<"\n";}
        else cout << "NO" << "\n";
        
    }
}