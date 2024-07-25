#include <iostream>
using namespace std;
 
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
    long long sum=abs(max(a,b)-min(a,b));
    cout << sum << "\n";
    }
}