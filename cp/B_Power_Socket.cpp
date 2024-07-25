#include <iostream>
using namespace std;
 
int main()
{
 
    int a,b;
    cin>>a>>b;
    int cnt=1,sum=a;
    while(sum<b)
    {
        sum+=a-1;
        cnt++;
    }
    if(b==1) cout << 0;
    else cout << cnt;
}