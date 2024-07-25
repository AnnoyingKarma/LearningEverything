#include <iostream>
using namespace std;
 
int main()
{
 
    int t; cin>>t; 
    while (t--)
    {
        int arr[6];
        for(int i=0; i<6; i++) cin>>arr[i];
        int x1,y1,x2,y2;
        x1=arr[2]-arr[0];
        y1=arr[3]-arr[1];
        x2=arr[4]-arr[0];
        y2=arr[5]-arr[1];
        int a,b;
        a=abs(x2-x1);
        b=abs(y2-y1);
        cout << a << " " << b << "\n";
        int sum=a+b+1;
        cout << sum << "\n";
    }
 
}