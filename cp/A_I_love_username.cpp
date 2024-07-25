#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(n==1) {
        cout << 0 << "\n";
        return 0;}

    int mini=arr[0],maxi=arr[0];
    if(arr[0]>arr[1]) maxi=arr[0],mini=arr[1], cnt++;
    else if(arr[1]>arr[0]) maxi=arr[1],mini=arr[0], cnt++;

    for(int i=2; i<n; i++)
    {
        if(arr[i]<mini) cnt++;
        if(arr[i]>maxi) cnt++;

        if(arr[i]>maxi) maxi=arr[i];
        if(arr[i]<mini) mini=arr[i];
    }
    cout << cnt;
}