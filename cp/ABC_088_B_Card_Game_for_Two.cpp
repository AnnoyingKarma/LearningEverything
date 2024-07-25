#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int n,result=0;
    cin>>n;
    int arr[101]={0};
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n+1/2; i+=2)
    {
        result += arr[i];
        result -= arr[i+1];
    }
    cout << result;
}