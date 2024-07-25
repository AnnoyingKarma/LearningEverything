#include <iostream>
using namespace std;
int main()
{
    int n,st; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {cin >> a[i];} 
    st=a[n-1];
    for(int i=n-1; i>0; i--)
    {a[i]=a[i-1];}
    a[0]=st;
    for(int aa: a)
    {cout << aa << " ";}

}