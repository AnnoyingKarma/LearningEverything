#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
 
int main()
{
 
    int t; cin>>t;
    while(t--)
    {
        int n,m,k,a;
        cin>>n>>m>>k;
        vector <int> j[n],g[m];
        for(int i=0; i<n; i++) cin>>a,j.push_back(a);
        for(int i=0; i<m; i++) cin>>a,g.push_back(a);
        sort(g.end(),g.begin());
        sort(j.begin(),j.end());
        for(int j=1; j<=k; j+=2)
        for(int i=0; i<min(n,m); i++)
        {
            swap(j[i],g[i]);
        }
        
    }

}