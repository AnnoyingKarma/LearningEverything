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

int n,x,cnt0=0,cnt5=0;
cin>>n;
ll sum=0;
REP(i,0,n)
{
    cin>>x;
    sum+=x;
    if(x==0) cnt0++;
    if(x==5) cnt5++;
}
if(cnt5<1&&cnt0<=1)
{
    if(cnt0>0) cout << "0"; 
    else cout << "-1";
}
else
{
    if(sum%3==0)
}

}