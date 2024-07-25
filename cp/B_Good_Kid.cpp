#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[10];
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n);
        a[0]+=1;
        int sum=1;
        for(int i=0; i<n; i++)
        {
            sum*=a[i];
        }
        cout << sum << "\n";

    }
}