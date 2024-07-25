#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
    vector <long long> v;
    long long t;
    long long n;
    cin>>t;
    while(t--)
    {
        v.clear();
        long long num=1;
        cin >>n;
        for(int i=0; i<n; i++)
        {
            v.push_back(num);
            num+=2;
        }
        for(int i=0; i<n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
 
}