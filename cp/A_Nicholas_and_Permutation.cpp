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

int n,x,a,b;
cin>>n;
vector <int> v;
for(int i=0; i<n; i++)
{
    cin>>x;
    v.PB(x);
} 

for(int i=0; i<n; i++)
{
    if(v[i]==1) a=i;
    else if(v[i]==n)b=i; 
}



}