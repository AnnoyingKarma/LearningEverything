#include <iostream>
using namespace std;

int main ()
{
    int a[1000];
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i = n-1; i>-1; i--) cout << a[i] << " ";
}