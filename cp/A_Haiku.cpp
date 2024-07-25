#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

int main()
{
int cnt1=0,cnt2=0,cnt3=0;
string s1,s2,s3;
getline(cin,s1);
getline(cin,s2);
getline(cin,s3);

REP(i,0,s1.size())
{
    if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u') cnt1++;
}
REP(i,0,s2.size())
{
    if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u') cnt2++;
}
REP(i,0,s3.size())
{
    if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u') cnt3++;
}

if(cnt1==5&&cnt2==7&&cnt3==5) cout << "YES";
else cout << "NO";
}