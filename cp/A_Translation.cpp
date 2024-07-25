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

string n,m; cin>>n>>m;
int s=0,e=n.size()-1;
while(e>-1)
{
    if(n[s]!=m[e]) 
    {
        cout << "NO";
        return 0;
    }
    s++,e--;
}
cout << "YES";
}