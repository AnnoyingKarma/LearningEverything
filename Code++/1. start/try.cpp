#include <iostream>
#include <math.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    bool check = true;
    int n;
    cin>>n;
    if(n==1||n==0) check=false;
    for(int i=0; i<sqrt(n); ++i){
      if(n%2==0) check=false;
    }
    if(check) cout << "Prime\n";
    else cout << "Not Prime\n";
  }
}