#include <iostream>
#include <vector>
#include <cctype>
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

string s,ans;
cin>>s;
transform(s.begin(), s.end(), s.begin(), ::tolower); 
REP(i,0,s.size())
{
    if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
    {
        ans+='.';
        ans+=s[i];
    }
}
    cout << ans;
}