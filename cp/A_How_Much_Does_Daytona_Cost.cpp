#include <iostream>
#include <vector>

using namespace std;
 
bool check()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        if (v[i]==k) return true;
    }
    return false;
}

int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int ans=check();
        if(ans==1) cout << "YES\n";
        else cout << "NO\n";
    }
 
}