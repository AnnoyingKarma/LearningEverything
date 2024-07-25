#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

int main()
{

ll n; 
cin>>n;
ll arr[n];
REP(i,0,n) cin>>arr[i];
sort(arr,arr+n);

ll cntMin=0,cntMax=0;
if(arr[n-1]==arr[0])
{
    cout << 1ll*arr[n-1]-arr[0] << " " << 1ll*n*(n-1)/2;
    return 0;
}
else{
REP(i,0,n)
{
    if(arr[0]==arr[i])
    cntMin++;
    else break;
}
for(int i=n-1; i>=0; i--)
{
    if(arr[n-1]==arr[i])
    cntMax++;
    else break;
}
}

cout << 1ll*arr[n-1]-arr[0] << " " << 1ll*cntMin*cntMax;

}