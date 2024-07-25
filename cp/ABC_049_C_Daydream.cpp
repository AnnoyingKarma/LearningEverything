#include <iostream>
using namespace std;
 
int main()
{
 
    string s,c;
    string t[4]= {"dream","dreamer","erase","eraser"};
    cin>>s;
    for(int i=0; i<size(s); i++)
    {
        c+=s[i];
        if(c==t[0]||c==t[2]&&s[i+2] != 'r'&&s[i+1]!='e'&&s[i+3]=='a'||s[i+3]==e)
        {
            c.clear();
        }
        else if(c==t[1]||c==t[3]) c.clear();

    }
    if(c.empty()==true) cout << "YES";
    else cout << "NO";
}