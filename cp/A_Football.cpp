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
string s;
cin>>s;
int cnt=0,max=0;
REP(i,0,s.size())
{
    if(s[i]=='0')
    {
        if(s[i-1]=='1') cnt=0;
        cnt++;
    }
    else if(s[i]=='1')
    {
        if(s[i-1]=='0') cnt=0;
        cnt++;
    } 
    if(max<cnt) max=cnt;
}
if(max>6) cout << "YES";
else cout << "NO";

}