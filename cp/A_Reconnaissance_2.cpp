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

int n;
cin>>n;
int arr[n+1];
REP(i,0,n) cin>>arr[i];
arr[n]=arr[0];
int mini=abs(arr[0]-arr[1]);
int a=0,b=1;
REP(i,1,n)
{
    int temp=abs(arr[i]-arr[i+1]);
    if(temp<mini)
    {
        mini=temp;
        a=i,b=i+1;
    }
}

if(b==n) b=0;
cout << a+1 << " " << b+1;


}