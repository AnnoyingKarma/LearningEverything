#include <iostream>
using namespace std;

int main ()
{
    int a[100];
    int n,x,cnt=0; cin>>n>>x;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        if(a[i]==x) cnt++;
    }
    cout << cnt;
}