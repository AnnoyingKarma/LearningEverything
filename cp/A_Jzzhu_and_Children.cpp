#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    float val,t=0;
    int ans=n;
    for(int i=0; i<n; i++) 
    {
        cin>>val;
        if(ceil(val/m)>=t)
        {
            t=ceil(val/m);
            ans=i+1;
        }
    }
    cout << ans;
}