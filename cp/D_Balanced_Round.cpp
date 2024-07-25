#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int t; cin>>t;
    int n,k,cnt,ans;
    while(t--)
    {
        cnt=0,ans=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            cnt++;
            if(arr[i]+k<arr[i+1]) ans=max(cnt,ans),cnt=0;
        }
        ans=max(cnt,ans);
        cout << n-ans << "\n";
    }

}