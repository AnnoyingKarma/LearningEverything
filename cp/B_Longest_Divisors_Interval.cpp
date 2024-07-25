#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,i,cnt=0; 
        cin>>n;
        for(i=1; i<=n; i++)
        {
            if(n%i==0) cnt++;
            else break;
        }
        if(cnt==0) cnt=1;
        cout << cnt << "\n";
    }
}