#include <iostream>
#include <algorithm>
using namespace std;
 
int a(int t)
{
    int n,time,ans=INT_MAX,temp;
    int d,s;
    cin>>n;
    while(n--)
    {
        cin>>d>>s;
        if(s%2==0) time=(s/2)-1;
        else time=s/2;
        temp=d+time;
        if(ans>temp) ans=temp;
    }
    return ans;
}   

int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        cout << a(t) << "\n";
    }

 
}