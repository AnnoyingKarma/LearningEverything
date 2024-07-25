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
int n; cin>>n;
int m=(n*2)+1;
REP(i,0,n+1)
{
    for(int a=0; a<n-i; a++)
    {
        cout << "  ";
    }
    for(int b=0; b<=i; b++)
    {
        cout << b << " ";
    }
    for(int c=i-1; c>=0; c--)
    {
        if(c!=0)
        {
            cout << c << " ";
        }
        else cout << c;
    }
    cout << "\n";
}
REP(i,0,n)
{
    for(int e=n; e>n-(i+1); e--)
    {
        cout << "  ";
    }
    for(int d=0; d<n-i; d++)
    {
        cout << d << " ";
    }
    for(int f=n-(i+2); f>=0; f--)
    {
        if(f!=0)
        {
            cout << f << " ";
        }
        else cout << f;
    }
    cout << "\n";
}
}