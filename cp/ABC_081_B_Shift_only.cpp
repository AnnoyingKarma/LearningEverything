#include <iostream>
using namespace std;
 
int main()
{
 
    int n,cnt=0,mincnt=100000;
    cin>>n;
    int arr[1];// set n inside // removed for red error
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n; i++){
    while(arr[i]%2==0)
    {
        cnt++;
        arr[i]/=2;
    }
    mincnt=min(cnt,mincnt);
    cnt=0;
    }
    cout << mincnt << "\n";
}