#include <iostream>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    long long n,k,sum=0;
    while(t--)
    {
        cin>>n>>k;
        int arr[n]; 
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++) sum+=arr[i];
        
        if(sum<=k) cout << "Yes\n";
        else cout << "No\n";
    }
 
}