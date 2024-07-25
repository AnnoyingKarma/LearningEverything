#include <iostream>
using namespace std;

int main()
{
    string s1,s2,rs; cin >> s1 >> s2;
    for(int i=s2.size()-1; i>-1; i--)
    {
        for(int j=0; j<s1.size(); j++)
        {
            if(s2[i]==s1[j])
            {
                s1[j]=' ';
            }
        }
    }
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]==' ')
        {
            continue;
        }
        else 
        rs.push_back(s1[i]);
    }
    cout << rs << "\n";
}