#include <iostream>
using namespace std;
 
int main()
{
 
    int n, cnt=0;
    cin>>n;
    while(n>=1) 
    {
        if(n%10==1) cnt++;
        n/=10;
    }
    cout << cnt << "\n";
}