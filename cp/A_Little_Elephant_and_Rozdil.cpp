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

int temp[100002];

int main()
{


    long long n,x,min=INT_MAX,check=0,index; cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x==min)
        {
            check++;
        }
        if(x<min)
        {
            check=0;
            min=x;
            check++;
            index=i;
        }
    }
    if(check>1) cout << "Still Rozdil";
    else cout << index;
}