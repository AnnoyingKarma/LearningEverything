#include <iostream>
using namespace std;
 
int main()
{
 
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if((a+b+c)>=n&&n>=3&&a>0&&b>0&&c>0) cout << "YES\n";
    else cout << "NO\n";
 
}