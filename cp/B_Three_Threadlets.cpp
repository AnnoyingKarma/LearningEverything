#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    long long a,b,c,sum;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>c;
        long long low=min({a,b,c});
        if(a%low!=0||b%low!=0||c%low!=0) sum=7;
        sum+=a/low;
        sum+=b/low;
        sum+=c/low;
        sum-=3;
        if(sum<=3) cout << "YES\n";
        else cout << "NO\n";
    }
 
}