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
#define REP(i,a,b) for (int i = a; i < b; i++)

int main()
{

int n,m;
cin>>n;
int arr1[n];
REP(i,0,n) cin>>arr1[i];
cin>>m;
int arr2[m];
REP(i,0,m) cin>>arr2[i];
int cnt=0;
ll maxed=-1;
REP(i,0,n)
REP(j,0,m)
{
    if(arr2[j]%arr1[i]==0)
    {
        ll val=arr2[j]/arr1[i];
        if(maxed<val)
        {
            maxed=val;
            cnt=1;
        }
        else if(maxed==val)
        {
            cnt++;
        }
    }
}
cout << cnt;
}