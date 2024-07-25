#include <iostream>
#include <vector>
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

int n; cin>>n;
int arr[12];

REP(i,0,12) cin>>arr[i];

sort(arr,arr+12,greater<int>());

if(n==0)
{
    cout << 0;
    return 0;
} 

REP(i,0,12)
{
    n-=arr[i];
    if(n<=0)
    {
        cout << i+1;
        return 0;
    }
}
cout << "-1";
}