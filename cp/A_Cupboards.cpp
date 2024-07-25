#include <iostream>
#include <utility>
using namespace std;

int main()
{

int n,cnt0=0,cnt1=0,ans=0;
cin>>n;
int arr[n*2];

for(int i=0; i<n*2; i++)
{
    cin>> arr[i];
}
for(int i=0; i<n*2; i+=2)
{
    if(arr[i]==1) cnt0++;
    if(arr[i+1]==1) cnt1++;
}

if(cnt0==0&&cnt1==0)
{
    cout << 0;
}
else if(cnt0==n&&cnt1==n)
{
    cout << 0;
}

}