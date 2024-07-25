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

string s; cin>>s;
if(s[0]!='1'){cout << "NO"; return 0;}
REP(i,0,s.size())
{
    if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4') i+=2;
    else if(s[i]=='1'&&s[i+1]=='4') i+=1;
    else if(s[i]=='1') continue;
    else 
    {
        cout << "NO";
        return 0;
    }
}
cout << "YES";

}