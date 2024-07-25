#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  string s,r;
  cin>>s;
  r=s;
  
  for(int i=0; i<s.size();i++)
  {
    for(int j=r.size()-1; j>=0; j--)
    {
      if(s[i]!=r[j]) {r.erase(r.begin()+j,r.end());}
      else break;
    }
  }
  cout << r.size();
}