#include <iostream>
using namespace std;
 

void ans(int arr[], int n)
{
    long long sum=0,one=0;
    for(int i=0; i<n; i++) 
    {
        sum+=arr[i];
        if(arr[i]==1) one++;
    }
    if(n==1) cout << "NO\n";
    else if(sum-n>=one) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        ans(arr,n);
    }
}