#include <iostream>
#define ll long long int
using namespace std;
 

void ans(ll n)
{
    if(n<=6||n==9) cout << "NO\n";
    else {
        cout << "YES\n";
        if(n%3==0)
            cout << 1 << " " << 4  << " " << n-5 << "\n";
        else 
            cout << 1 << " " << 2 << " " << n-3 << "\n";
    }
}

int main()
{
    ll t,n; cin>>t;
    while(t--)
    {
        cin>>n;
        ans(n);
    }
}




// bool val(ll &i, ll &j, ll &k, ll n)
// {
//         for(i=1; i<=n; i++)
//         for(j=i+1; j<=n; j++)
//         for(k=j+1; k<=n; k++)
//         {
//             if(i%3!=0&&j%3!=0&&k%3!=0&&i+j+k==n)
//             {
//                 return true;
//             }
//         }
//         return false;
// }

// int main()
// {
 
//     ll t,n;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         ll i,j,k;
//         if(val(i,j,k,n)==true) cout << "YES\n" << i << " " << j << " " << k << "\n";
//         else cout << "NO\n";
//     }
 
// }