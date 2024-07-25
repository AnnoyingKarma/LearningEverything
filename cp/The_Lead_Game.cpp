#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    int a,b,sum1=0,sum2=0,diff=0,ans=0,w,p;
    vector <pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0; i<n; i++)
    {
        sum1+=v[i].first;
        sum2+=v[i].second;
        if(sum1>sum2) diff=sum1-sum2,w=1;
        else if(sum2>sum1) diff=sum2-sum1,w=2;
        
        if(ans<diff) ans=diff,p=w;
    }

    cout << p << " " << ans;
    // for(int i=0; i<n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << "\n"; 
    // }
}