#include <iostream>

using namespace std;

int main()
{
    // TLE in Brute Force
    /*
    int n,count=0;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
    for(int j=1; j<=n; j++)
    {
    if((i*2+j*2)==n)
    {count++;}   
    }
    }

   cout << count/2 << endl; 
    */

   //condition ? result_if_true : result_if_false

    int n;
    cin>>n;
    // {cout<<(n%2?0:(n-2)/4);}

    if(n%2==0)
    {
       cout << (n-2)/4;
    }
    else
    cout << 0;


}