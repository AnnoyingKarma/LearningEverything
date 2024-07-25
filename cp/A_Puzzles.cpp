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

int n,m;
cin>>n>>m;
int arr[m];
REP(i,0,m) cin>>arr[i];
int sum=0,min=INT_MAX;

sort(arr,arr+m);

if(m==n)
{
   REP(i,0,m-1)
   {
      sum+=arr[i+1]-arr[i];  
   } 
   cout << sum;
   return 0;
}

REP(i,0,(m-n)+1)
{
    sum=0;
    REP(j,i,i+(n-1))
    {
        sum+=(arr[j+1])-arr[j];
    }
    if(min>sum) min=sum;
}
if(min==12456788) min=0;
cout << min;
}

