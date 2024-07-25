#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int> s;
    for(int i=0; i<n-1; i++)
    {
        cin>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());

    for(int i=0,j=1; i<n; i++,j++)
    {
        if(s[i] != j)
        {
            cout << j;
            break;
        }
    }

}