#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int ans =0;
        int n; cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) cin>>arr[i];
        for (int i=0; i<n-1; i++) 
        {
            if(arr[i]>arr[i+1]) ans=max(ans, arr[i]);
        }
        cout << ans << "\n";
    }

}