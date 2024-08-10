#include <iostream>

using namespace std;

string removeOuterParentheses(string s) {
  int n=s.size(),cnt=0;
  string ans ="";
  for(int i=0; i<n; ++i){
    if(s[i]=='(') cnt++;
    else if(s[i]==')')cnt--;
    if(cnt>1)ans+=s[i];
    if(cnt==1 && s[i]==')') ans+=s[i];
  }
  return ans;
}

int main(){
  string s="(((())))";
  
  cout << removeOuterParentheses(s);

}