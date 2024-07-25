#include <iostream>
using namespace std;

int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

bool ans(int n, int m)
{
    for(int i=0; i<15; i++)
    {
        if(n==arr[i])
        {
            if(m==arr[i+1])
            {
                return true;
            }
            return false;
        }
    }
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    if(ans(n,m)) cout << "YES\n";
    else cout << "NO\n";

}