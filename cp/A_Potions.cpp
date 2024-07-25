#include <iostream>
using namespace std;

int main()
{
    int cnt=0,n,h,x,p[1000];
    cin>>n>>h>>x;
    for(int i=0; i<n; i++) cin>>p[i];

    int sum=0,i=0;
    while(sum<x)
    {
        sum=h+p[i];
        i++;
    }
    cout << i;
}