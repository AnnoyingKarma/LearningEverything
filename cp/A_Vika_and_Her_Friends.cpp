#include <iostream>
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a,b; cin>>a>>b;
        int arr[k*2];
        for(int i=0; i<k*2; i++) cin>>arr[i];
    
        if(k>=2 && n>2 && m>2) cout << "NO\n";
        else cout << "YES\n";
    
    }
 
}