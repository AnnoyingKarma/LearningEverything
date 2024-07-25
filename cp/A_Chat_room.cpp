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

int cnth=0,cnte=0,cntl=0,cnto=0;

REP(i,0,s.size())
{
    if(s[i]=='h') cnth++;
    else if(s[i]=='e'&&cnth>0) cnte++;
    else if(s[i]=='l'&&cnte>0) cntl++;
    else if(s[i]=='o'&&cntl>1) cnto++;
}
if(cnth>0&&cnte>0&&cntl>1&&cnto>0) cout << "YES\n";
else cout << "NO";

}