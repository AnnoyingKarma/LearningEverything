#include <iostream>
using namespace std;

int main ()
{
    int t, b1,b2,r,c1,c2;
    cin>>t;
    while (t--)
    {
    cin>>b1>>b2>>r;
    c1=0,c2=0;
    int a[r][2];
    for(int i=0; i<r; i++)
    {
        for (int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        if(a[i][0]==1) c1++;
        if(a[i][1]==1) c2++;
    }
        cout << (max(b1,b2)*min(c1,c2))+(min(b1,b2)*max(c1,c2)) << "\n";
    }
}