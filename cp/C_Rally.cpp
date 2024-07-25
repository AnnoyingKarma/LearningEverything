#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
 
int main()
{
 
    int n,sum=0;
    float mean=0;
    cin>>n;
    int arr[101];
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; i<n; i++) mean+=arr[i];
    mean=round(mean/n);
    for(int i=0; i<n; i++)
    {
        sum+=pow(arr[i]-mean,2);
    }
    cout << sum;
}