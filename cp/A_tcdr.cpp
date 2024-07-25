#include <iostream>
using namespace std;
 
int main()
{
 
    string s,temp;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            temp+=s[i];
        }
    }
    cout << temp;
}