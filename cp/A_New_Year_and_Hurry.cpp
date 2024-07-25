#include <iostream>
using namespace std;

int main()
{
    int n,k,temp=0,i; cin>>n>>k;
    int time=240-k;
    for(i=1; i<=n; i++)
    {
        temp+=i*5;
        if(temp>time) break;
    }
    cout << i-1 << "\n";
}