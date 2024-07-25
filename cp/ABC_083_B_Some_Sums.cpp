#include <iostream>
using namespace std;
 
int main()
{
    int n,a,b,sum=0,res=0;
    cin>>n>>a>>b;

    if(n>10)
    {
        for(int i=1; i<=n; i++)
        {
            if(i>9)
            {
                int c=i;
                res=0;
                while(c>0)
                {
                res += c%10;
                c/=10;
                }
                if(res>=a&&res<=b) sum+=i;
            }
            else if(i>=a&&i<=b) sum+=i;
        }
        cout << sum;
    }
    else cout << a+b+n;
}