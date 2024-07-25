#include <iostream>
using namespace std;

int main()
{

string s;
cin>>s;
    int n=s.size();
    int low=0,mid=0,high=n-1;

    for(int i=0; i<n; i+=2)
    {
        if(s[mid]=='1')
        {
            swap(s[low],s[mid]);
            mid+=2,low+=2;
        }
        else if(s[mid]=='2')
        {
            mid+=2;
        }
        else if(s[mid]=='3')
        {
            swap(s[mid],s[high]);
            high-=2;
        }
    }
    cout << s << "\n";
}