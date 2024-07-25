#include <iostream>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout << "\n";
    }
    if(a[0][0]+a[0][1]==a[1][0]+a[1][1]) cout << 1 << "\n";
    else cout << 0 << "\n";
}