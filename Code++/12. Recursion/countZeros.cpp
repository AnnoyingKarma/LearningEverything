#include <iostream>
using namespace std;

int count(int n,int cnt=0){
  if(n%10==n){
    if(n%10==0) cnt++;
    return cnt;
  }
  if(n%10==0) cnt++;
  return count(n/10,cnt);

}

int main(){
  cout << count(0);
}
