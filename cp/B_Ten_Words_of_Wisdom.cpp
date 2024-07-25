#include <iostream>
using namespace std;
 
int main()
{
 
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++) cin>>a[i]>>b[i];
        int ans,temp=0;
        for(int i=0; i<n; i++)
        {
            if (a[i]<=10&&b[i]>temp)
            {
                temp=b[i];
                ans=i+1;
            }
        }
        cout << ans << "\n";
    }
 
}   