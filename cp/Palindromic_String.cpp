#include <iostream>
using namespace std;
int main() {
	string s,rs; cin>>s;
	for (int i=s.size()-1; i>-1; i--)
	{
		rs.push_back(s[i]);
	}
	if(rs==s) cout << "YES\n";
	else cout << "NO\n";
}