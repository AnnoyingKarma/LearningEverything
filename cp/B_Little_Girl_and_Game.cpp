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

string s,temp;
cin>>s;
int cnt=0;
sort(s.begin(),s.end());

REP(i,1,s.size())
{
    if(s[i]!=s[i-1])
    {
        cnt++;
    }
}
if(cnt>=2&&cnt%2==0) cout << "Second";
else cout << "First";
}