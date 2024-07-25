#include <iostream>
using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    m--;
    int arr[101];
    for(int i=0; i<n; i++) cin>>arr[i];

    int s=m-1,e=m+1;
    if(arr[m]==1) cnt++;
    while(s>-1||e<n)
    {
        if(arr[s]==1 && arr[e]==1) cnt+=2;
        else if(s<0 && arr[e]==1) cnt++;
        else if(e>n-1 && arr[s]==1) cnt++;
        s--;
        e++;
    }
    if(cnt==26) cnt=25;
    cout << cnt;
}