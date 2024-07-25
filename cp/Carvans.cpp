#include <iostream>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int a,t,n,cnt,arr[10001]; cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        a=arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]<a)
            {   a=arr[i];
                cnt++;}
        }
        cout << cnt << "\n";
    }
}



// did it using vector
/*
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,e,t,n,cnt; cin>>t;
    vector <int> v;
    while(t--)
    {
        cin>>n;
        cnt=1;
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>e;
            v.push_back(e);
        }
        a=v[0];
        for(int i=0; i<n; i++)
        {
            if(v[i]<a)
            {a=v[i];
                cnt++;}
        }
        cout << cnt << "\n";
    }
}
*/