#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        vector<int> v;
        cin>>n>>k>>x;

        
        if(x!=1){
        cout << "YES\n";
        cout << n << "\n";
        for(int i=1; i<=n; i++) cout << 1 << " ";
        cout << "\n";
        }
        else {
            if(n%2==0&&k>=2){ 
            cout << "YES\n";
            cout << n/2 << "\n";
            for(int i=1; i<=n; i+=2) cout << 2 << " ";
            cout << "\n";}
        else if(k==n)
            {
            cout << "YES\n";
            cout << 1 << "\n" << k << "\n";
            }   
            else cout << "NO\n";
        }
        
    }
 
}