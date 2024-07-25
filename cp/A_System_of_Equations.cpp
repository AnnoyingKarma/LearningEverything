#include <iostream>
#include <vector>
#include <math.h>
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
int cnt=0;
for(int i=0; i<=sqrt(n); i++)
for(int j=0; j<=sqrt(n); j++)
{
    if(((i*i)+j)==n) cnt++;
}
for(int i=0; i<=sqrt(m); i++)
for(int j=0; j<=sqrt(m); j++)
{
    if(((j*j)+i)==m) cnt++;
}
cout << cnt;
}