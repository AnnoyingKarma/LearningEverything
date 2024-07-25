#include <iostream>
using namespace std;
 

bool isPrime(int a,int b)
{
    if(a*b%2==0)return true;
    return false;
}

int main()
{
 
    int a,b;
    cin>>a>>b;
    if(isPrime(a,b)) cout << "Even\n";
    else cout << "Odd\n";
    return 0;
}