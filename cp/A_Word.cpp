#include <iostream>
#include <math.h>
using namespace std;

int main()
{
string s;
cin>>s;
int cnt=0,n=s.size();
int z=n/2;
if(n%2!=0) z+=1;
for(int i=0; i<s.size(); i++)
{
    if(islower(s[i])) cnt++;
}

if (cnt>=z)
{
    for(auto& x:s){
        x=tolower(x);
    }
    cout << s;
}
else 
{
    for(auto& x:s){
        x=toupper(x);
    }
    cout << s;
}
}