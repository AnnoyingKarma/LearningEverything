#include <iostream>

using namespace std;

long long int floorSqrt(long long int x) 
{

  long long s=0,e=x,ans=0;
  while(s<=e){
    long long mid=s+((e-s)/2);
    if((mid*mid)==x){
      return mid;
    }
    else if((mid*mid)<x){
      ans=mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
  }   
  return ans;

}

int main(){
  cout << floorSqrt(16);
}