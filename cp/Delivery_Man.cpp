#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{

int n,x,y;
cin>>n>>x>>y;
int *arrx = new int(x);
int *arry = new int(y);
for(int i=0; i<n; i++) cin>>arrx[i];
for(int i=0; i<n; i++) cin>>arry[i];

sort(arrx,arrx+n, greater<int>());
sort(arry,arry+n, greater<int>());

int a=0,b=0;
ll sum=0;
while(1)
{
    if(n==0) break;
    if(x==0) sum+=arry[b],b++;
    else if(y==0) sum+=arrx[a],a++;
    else if(arrx[a]>=arry[b])
    {
        sum+=arrx[a];
        a++;
        x--;
    }
    else if(arrx[a]<arry[b])
    {
        sum+=arry[b];
        b++;
        y--;
    }
    n--;
}
    cout << sum;
}