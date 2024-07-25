#include <iostream>
using namespace std;

int gcd(int y, int z) {
   if (z == 0)
   return y;
   return gcd(z, y % z);
}

int main()
{

    long long t,l,r,a,b;
    cin>>t;
    while(t--)
    {

    cin>>l>>r;
    for(int i=l; i<=r; i++)
    {
        for(int j=1; j<=i/2; j++)
        {
            a=j,b=i-1;
            if(l<=a+b && a+b<=r && gcd(a,b)!=1)
            {
                goto lack;
            }
        }
    }
    
    lack:
    cout << a << " " << b << "\n";
    if(l>=a+b && a+b>=r && gcd(a,b)==1)
    { cout << -1 << "\n";}
    }

}