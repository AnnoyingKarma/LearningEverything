#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=n;
    bool ans=false;
    long revNum = 0;
    while(n>0){
        int temp = n%10;
        revNum=(revNum*10)+temp;
        n/=10;
    }
    if(revNum==k){
        ans=true;
    }
    cout << ans;
}