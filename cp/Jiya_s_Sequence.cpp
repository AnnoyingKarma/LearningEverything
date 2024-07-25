#include <iostream>
using namespace std;

bool check(long long product)
{ 
            long long num = product % 10;
            if(num == 2 || num == 3 || num == 5){
            return true;}
            else
            return false;
}


void product()
{
        long long n,a,product;
        product=1;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            product=a*product;
        }
        if(check(product)==true)
        {
            cout << "YES\n";
        }
        else 
        cout << "NO\n";
}

int main () {
    int t;
    cin>>t;
    while(t--)
    {
        product();
    }
}

