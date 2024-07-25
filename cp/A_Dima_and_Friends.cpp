#include <iostream>
using namespace std;

int main()
{
long long sum=0;
int n; cin>>n;
int arr[n];

for (int i=0; i<n; i++) cin>>arr[i];

for(int i=0; i<n; i++)
{
    sum+=arr[i];
}


}