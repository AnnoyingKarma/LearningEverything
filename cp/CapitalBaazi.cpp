#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    for (int i=0; i<s.length(); i++)
    {
        if(isspace(s[i]))
        {
            cout << endl;
        }
        else 
        {
            s[i]= toupper(s[i]);
            cout << s[i];
        }
    }

}