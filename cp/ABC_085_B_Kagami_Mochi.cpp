#include <iostream>
using namespace std;
 
int main()
{
 
    int n,cnt=0;
    cin>>n;
    int arr[101]; // put n there // removed for red error
    int num[101]={0};
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) 
    {
        if(num[arr[i]]==0)
        {
            num[arr[i]]++;
            cnt++;
        }
    }
    cout << cnt;
 
}