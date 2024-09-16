#include <iostream>
using namespace std;

int fib(int n,int a,int b){
  if(n<=0) return a;
  int temp=b;
  b=a+b;
  a=temp;
  return fib(n-1,a,b);
}

int fib(int n){
  if(n<=1) return n;
  return fib(n-1)+fib(n-2);
}

int main(){
  cout << fib(10,0,1) << " ";
  cout << "\n";
  cout << fib(10) << " ";
}