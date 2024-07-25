#include <iostream>
#include <string>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    string x,s;
    int n,m,ans,sol;
    while(t--)
    {
        cin>>n>>m;
        cin>>x>>s;
        ans=-1,sol=0;
        int a=6;
        while(a--)
        {
            if(x.find(s) != string::npos)
            {
                ans=sol;
                break;
            }
            x+=x;
            sol++;
        }
        cout << ans << "\n";
    }
 
}