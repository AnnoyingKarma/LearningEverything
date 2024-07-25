#include <iostream>
using namespace std;
 
int ans(int a[],int n)
{
    int x;
    if(a[0]==1) x=2;
    else x=1;
    for(int i=1; i<n; i++)
    {
        x++;
        if(a[i]==x) x++;
    }
    return x;
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout << ans(a,n) <<"\n"; 
    }
 
}