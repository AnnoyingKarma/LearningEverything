#include <iostream>
using namespace std;

int arr[100001];
long long res0,res1,n,val,m;

int main()
{
     
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        arr[val]=i;
    }
    cin>>m;
    while(m--)
    {
        cin>>val;
        res0+=arr[val]+1;
        res1+=n-arr[val];
    }
    cout << res0 << " " << res1;
}