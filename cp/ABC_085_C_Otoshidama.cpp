#include <iostream>
using namespace std;

int main()
{
    int n,y;
    cin>>n>>y;
    int z,res1=-1,res2=-1,res3=-1;
    for(int a=0; a<=n; a++)
    for(int b=0; a+b<=n; b++)
    {
        int c = n-a-b;
        if(a*10000+b*5000+c*1000==y)
        {
            res1=a,res2=b,res3=c;
            break;
        }
    }
        cout << res1 << " " << res2 << " " << res3;
}