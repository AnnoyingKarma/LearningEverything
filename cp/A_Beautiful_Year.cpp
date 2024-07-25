#include <iostream>
using namespace std;

int main()
{

    int y;
    cin>>y;
    int i=y+1;
    while(1)
    {
        int temp,a,b,c,d;
        temp=i;
        a=temp%10,temp/=10;
        b=temp%10,temp/=10;
        c=temp%10,temp/=10;
        d=temp%10,temp/=10;
        if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d) 
        {
            cout << i << "\n";
            return 0;
        }
        i++;
    }

}