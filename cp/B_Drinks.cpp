#include <iostream>
using namespace std;

int main()
{

int n; cin>>n;
int arr[n]; 
double sum=0,ans=0;
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

for(int i=0; i<n; i++) sum+=arr[i];

ans=((sum*100)/(n*100));
cout << ans << "\n";

}