#include <iostream>
using namespace std;

int main()
{

int arr[5][5]={4,3,2,3,4,3,2,1,2,3,2,1,0,1,2,3,2,1,2,3,4,3,2,3,4};
int n[5][5];
for(int i=0; i<5; i++)
for(int j=0; j<5; j++)
cin>>n[i][j];

for(int i=0; i<5; i++)
for(int j=0; j<5; j++)
if(n[i][j]==1)
cout << arr[i][j] << "\n";

}