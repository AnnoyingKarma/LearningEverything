#include <iostream>
#include <utility>
using namespace std;
 
int main()
{
    int t; cin>>t;
    int a,b,n; 
    while(t--)
    {
        cin>>a>>b>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        long long sum=0;
        sum+=b;
        for(int i=0; i<n; i++)
        {
            sum+=min(arr[i],a-1);
        }
        cout << sum << "\n";
    }
 
}