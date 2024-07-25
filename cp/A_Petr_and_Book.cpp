#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main()
{

int n; cin>>n;
int arr[7];
for(int i=0; i<7; i++) cin>>arr[i];
int ans=0,j=-1;

while(ans<n)
{
    j++;
    if(j==7) j=0;
    ans+=arr[j];
}
j++;
if(j==8) j=1;
cout << j;
}