#include <iostream>
using namespace std;
 
int main()
{
    int n; 
    cin>>n;
    string s="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    for(int i=0; i<=n+1; i++)
    {
        cout << s[i];
    }
}