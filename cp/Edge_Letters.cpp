#include <iostream>
using namespace std;


int main ()
{
    string s;
    cin>>s;
    int n, count;
    char x,y;
    cin>>n;
    while(n--)
    {
    count =0;
    cin >> x >> y;
    for(int i=0; i<s.size(); i++)
    {
        if(x != s[i]) continue;
        for(int j=i; j<s.size(); j++)
        {
            if(y != s[j]) continue;
            else if(s[i]==x && s[j]==y)
            {
                count ++;
            }
        }
    }
    cout << count << "\n";
    }
}