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
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main()
{

int n,m;
cin>>n>>m;
char arr[n+2][m+2];

REP(i,1,n)
REP(j,1,m)
{
    cin>>arr[i][j];
}  

REP(i,1,n)
REP(j,1,m)
{
    if(arr[i][j]=='.')
    {
        if((i+j)&1) arr[i][j]='W';
        else arr[i][j]='B';
    }
}

REP(i,1,n){
REP(j,1,m)
{
cout << arr[i][j];
}
cout << "\n";
}
}