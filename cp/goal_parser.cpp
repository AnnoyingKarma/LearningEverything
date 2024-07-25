#include <iostream>
using namespace std;
 
int main ()
{
    string s,ss; cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' && s[i+1] == ')')
        {
            ss.push_back('o');
            i++;
        }
        else if(s[i]=='(' && s[i+1] == 'a')
        {
            ss.push_back('a');
            ss.push_back('l');
            i+=3;
        }
        else 
        ss.push_back(s[i]);
    }
    cout << ss;
}