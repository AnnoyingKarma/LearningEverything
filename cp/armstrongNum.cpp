#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    long long n, sum=0;
    cin>>n;
    bool ans=false;
    long long k=n;
    int len = to_string(n).length();
    while(n>0){
        int temp=n%10;
        sum+=pow(temp,len);
        n/=10;
    }
    if(k==sum){
        ans=true;
    }
    cout << ans;
}