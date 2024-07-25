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
#define REP(i,a,b) for (i = a; i < b; i++)

int main()
{

long n,c;
cin>>n>>c;
long a,b,i,ans=0;
cin>>a;
REP(i,1,n)
{
    cin>>b;
    if(b-a>c)ans=0;
    else ans++;
    a=b;
}
cout << ans+1;
}