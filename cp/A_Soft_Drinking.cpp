#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //n friends,k bottle, l ml of drink in each bottle, c limes,d slices,p salt
    // they need==NL ml of drink,a slice of lime, NP grams of  salt
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int temp1=0,temp2=0;
    for(int i=nl; i<=k*l; i+=nl)
    {
        temp1++;
    }
    for(int i=np; i<=p; i+=np)
    {
        temp2++;
    }
    int ans = min(temp1,temp2);
    ans = min(ans,d*c);
    cout << ans/n;
}