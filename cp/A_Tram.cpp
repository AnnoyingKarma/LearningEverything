#include <iostream>
using namespace std;

int main()
{

int n,ans=0,sum=0;
cin>>n;
while(n--)
{
    int a,b;
    cin>>a>>b;
    sum-=a;
    sum+=b;
    if(sum>ans) ans=sum;
}
cout << ans << "\n";
}