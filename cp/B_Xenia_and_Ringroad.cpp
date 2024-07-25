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

int n,m; cin>>n>>m;
ll a,sum=0,prev;
cin>>prev;
sum+=prev;
for(int i=2; i<=m; i++)
{
    cin>>a;
    if(a<prev)
    {
        sum+=n-prev;
        sum+=a;
    }
    else 
    {
        sum+=a-prev;
    }
    prev=a;
}
    cout << sum-1;
}