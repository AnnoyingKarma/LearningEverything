#include <iostream>
#include <vector>
using namespace std;

int main()
{

int n,x,y,ans=0; cin>>n;
vector <pair<int,int>> v;

for(int i=0; i<n; i++)
{
    cin>>x>>y; 
    v.push_back(make_pair(x,y));
} 

for(int i=0; i<n; i++)
{
int arr[4]={0};
int cnt=0;
for(int j=0; j<n; j++)
{
    if(v[j].first>v[i].first&&v[j].second==v[i].second) arr[0]++;
    else if(v[j].first<v[i].first&&v[j].second==v[i].second) arr[1]++;
    else if(v[j].first==v[i].first&&v[j].second<v[i].second) arr[2]++;
    else if(v[j].first==v[i].first&&v[j].second>v[i].second) arr[3]++;
}
for(int k=0; k<4; k++)
{
    if(arr[k]>0) cnt++;
}
if(cnt>3) ans++;

}

cout << ans;

}