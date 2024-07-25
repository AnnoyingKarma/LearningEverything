#include <iostream>
using namespace std;

int main()
{

int arr[3][3];
int ans[5][5]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
for(int i=0; i<3; i++)
for(int j=0; j<3; j++) cin>>arr[i][j];


for(int i=0; i<3; i++)
for(int j=0; j<3; j++)
{
    int temp=arr[i][j];
    while(temp--)
    {
        ans[i][j]++,ans[i][j-1]++,ans[i][j+1]++,
        ans[i-1][j-1]++,ans[i-1][j]++,ans[i-1][j+1]++,
        ans[i+1][j-1]++,ans[i+1][j]++,ans[i+1][j+1]++;
    }
}

for(int i=0; i<3; i++)
for(int j=0; j<3; j++)
{
    if(ans[i][j]%2==0) ans[i][j]=0;
    else ans[i][j]=1;
}

for(int i=0; i<3; i++){
for(int j=0; j<3; j++){ cout << ans[i][j];}
cout << "\n";}
}