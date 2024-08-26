#include <iostream>
#include <vector>
using namespace std;

void recursion(int n){
  if(n==0) return ;
  recursion(n-1);
  cout << n << " ";
}

int main(){
  int n;
  cin>>n;
  recursion(n);

}