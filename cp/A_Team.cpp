#include <iostream>
using namespace std;

int check(int n)
{
    int x,y,z,count=0;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        if(x==1 && y==1 || y==1&&z==1 || z==1&&x==1) count++;
    }
    return count;
}

int main ()
{
    int n,i=1;
    cin>>n;
    cout << check(n) << endl;

}