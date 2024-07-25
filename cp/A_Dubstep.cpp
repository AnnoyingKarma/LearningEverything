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

string s,ans;
cin>>s;
REP(i,0,s.size())
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        i+=2;
    }
    else if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')
    {
        ans+=s[i];
        ans+=" ";
    }
    else
    {
        ans+=s[i];
    }
}
cout << ans;
}