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

int k,n;
cin>>k>>n;
vector <pair<int,int>> v;
REP(i,0,n)
{
    int x,y; cin>>x>>y;
    v.push_back(MP(x,y));
}
sort(v.begin(),v.end());

REP(i,0,n)
{
    if(v[i].first<k)
    {
        k+=v[i].second;
    }
    else
    {
        cout << "NO";
        return 0;
    }
}
cout << "YES";
}