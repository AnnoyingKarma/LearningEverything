#include <iostream>
#include <algorithm>
using namespace std;

int main ( )
{
    int t,n,k; cin>>t;
    while(t-- )
    {
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        { cin>>a[i];}
        sort(a, a+n);
        if(a[0]<k) cout << k-a[0] << "\n";
        else cout << 0 << "\n";
    }
}