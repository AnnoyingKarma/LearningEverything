#include <iostream>
using namespace std;

int main()
{
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
    long long cnt=0;
    cin>>a>>b>>c;
    if(a==b)
        goto pass;
        
    else if(a<b)
        while(a<b)
        {
            b-=c;
            a+=c;
            cnt++;
        }
    else if(a>b)
        while(a>b)
        {
            b+=c;
            a-=c;
            cnt++;
        }
    pass:
    cout << cnt << "\n";
    }
}