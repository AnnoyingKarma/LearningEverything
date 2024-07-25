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

int n,m;
cin>>n>>m;
int arr[n];
vector<int> v;
REP(i,0,n) cin>>arr[i];

REP(i,0,n){ if(arr[i]<0) v.push_back(arr[i]);}

int ans=0;
int j=0;
sort(v.begin(),v.end());

while(j<v.size()&&j<m)
{
    ans+=abs(v[j]);
    j++;
}
cout << ans;
}