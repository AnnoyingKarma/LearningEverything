#include <iostream>
#include <vector>
using namespace std;
 
void ans()
{
    int n,q;
    cin>>n>>q;
    int arr[n],total[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    total[0]=arr[0];
    for(int i=1; i<n; i++) total[i]+=(arr[i]+total[i-1]);
    while(q--)
    {
        long long sum=total[n-1];
        int l,r,k;
        cin>>l>>r>>k;
        if(l==1) sum-=total[r-1];
        else sum-=(total[r-1]-total[l-2]);    
        sum+=(k*((r-l)+1));
        if(sum%2==0) cout << "NO\n";
        else cout << "YES\n"; 
    }
}


int main()
{
 
    int t; cin>>t;
    while(t--)
    {
        ans();
    }
 
}