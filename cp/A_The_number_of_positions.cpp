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

int n,a,b,ans=0;
cin>>n>>a>>b;
if(a+b<n)ans=b+1;
else ans=n-a;

cout << ans;
}