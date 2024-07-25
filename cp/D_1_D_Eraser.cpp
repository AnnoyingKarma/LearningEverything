#include <iostream>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                i+=k-1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
 
}