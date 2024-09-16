#include <iostream>
#include <vector>
using namespace std;

int sumK(int sum,int &cnt,int i,int n,int k,vector<int> arr){
  if(i>=n){
    if(sum==k) cnt++;
    return cnt;
  }

  sumK(sum+arr[i],cnt,i+1,n,k,arr);
  sumK(sum,cnt,i+1,n,k,arr);
  return cnt;
}

int main(){
  vector<int> arr={1,2,1};
  int n=arr.size(); 
  int cnt;
  cout << sumK(0,cnt,0,n,2,arr);
   
}