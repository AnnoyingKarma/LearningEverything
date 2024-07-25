#include <iostream>
using namespace std;

int main()
{
    //intput x and k not divisible by k
    // print shortest distance
    //start from biggest num 
    // if == x then print x
    //else right part and left part which was not divisible
    int t; cin>>t;
    while(t--) { 
        int x,k; cin>>x>>k;
        if(x%k!=0){cout << 1 << "\n"; cout<<x<<"\n";}
        else {cout <<2<< endl; cout << x-1 << " " << 1 << "\n";}}}       