#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void check(string s)
{
    int count=0;
    sort(s.begin(), s.end());
    for (int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1]) count++;          
        }
    int ans = s.size() - count;
    if (ans%2==0)   cout << "CHAT WITH HER!\n";
    else    cout << "IGNORE HIM!\n";
}
    


int main()
{
    string s;
    cin >> s;
    check(s);
}