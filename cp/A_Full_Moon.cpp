#include <iostream>
using namespace std;
 
int main()
{
 
    int cnt=0,n,m,p;
    cin>>n>>m>>p;

    for(int i=m; i<=n; i+=p)
    {
        cnt++;
    }
    cout << cnt;
}