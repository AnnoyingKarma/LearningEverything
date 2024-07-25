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

ll n,k;
cin>>n>>k;
ll temp,mid;
if(n%2!=0) mid=(n/2)+1;
else mid=n/2;

if(k>mid)
{
    temp=(k-mid)*2;
}
else 
{
    temp=(k*2)-1;
}
cout << temp;
}