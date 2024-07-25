#include <iostream>
using namespace std;

int main ()
{
    unsigned long long l,r,sum;
    cin>>l>>r;
    unsigned long long n= (r-l)+1;
    sum=(l+r) * n/2;
    sum = sum-r;
    cout << sum;
}