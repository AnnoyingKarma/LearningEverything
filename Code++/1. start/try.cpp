#include <iostream>
using namespace std;

int main(){
  long long sum=2;
  for(int i=0; i<31; ++i){
    sum+=sum;
  }
  cout << sum;
}