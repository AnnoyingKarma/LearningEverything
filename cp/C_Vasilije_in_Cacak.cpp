#include <iostream>
typedef unsigned long long ll;
using namespace std;

long long sum(ll n)
{
    return 1LL * n*(n+1)/2;
}

int main()
{
 
    ll t;
    cin>>t;
    ll n,k,x;
    while(t--)
    {
        cin>>n>>k>>x;
        ll sum1=0,sum2=0,i=1;
        sum1=sum(k);
        sum2=sum(n)-sum(n-k);
        if(x>=sum1&&x<=sum2) cout << "YES\n";
        else cout << "NO\n";
    }
}