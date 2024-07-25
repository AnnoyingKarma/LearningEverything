#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

int main(){
    long long n;
    cin>>n;
    int bin[32]={0};
    int i=0;
    while(n>0){
    if(n%2==1){
        bin[i]=1;
        i++;
    }
    else{
        i++;
    }
    n/=2;
    }
    int cnt = 31;
    long long sum=0;
    for (int j=0; j<=i; j++){
        if(bin[j]==1&&cnt==0) sum+=1;
        else if(bin[j]==1){
            sum+=pow(2,cnt);
            cnt--;
        }
        else cnt--;
    }
    cout << sum;
}