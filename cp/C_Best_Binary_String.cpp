#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s; char a='0';
        for(int i =0; i<s.size(); i++)
        {   if(s[i]=='?')
            {s[i]=a;}
            else
            {a=s[i];}}
            cout << s << endl;
    }
}