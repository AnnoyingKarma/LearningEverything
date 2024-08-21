#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right){
  vector<int> temp;
  int low=left;
  int high=mid+1;
  while(low<=mid && high<=right){
    if(arr[low]<=arr[high]){
      temp.push_back(arr[low]);
      low++;
    }
    else{
      temp.push_back(arr[high]);
      high++;
    }
  }
  while(low<=mid){
    temp.push_back(arr[low]);
    low++;
  }
  while(high<=right){
    temp.push_back(arr[high]);
    high++;
  }
  for(int i=left; i<=right; i++){
    arr[i]=temp[i-left];
  }
}

void mergeSort(vector<int> &arr,int left,int right){
  int mid=left+((right-left)/2);
  if(left>=right)return ;
  mergeSort(arr,left,mid);
  mergeSort(arr,mid+1,right);
  merge(arr,left,mid,right);

}

int main(){

  vector<int> arr={2,5,21,123,3,21,2,12,2};
  int n=arr.size();
  mergeSort(arr,0,n-1);
  for(auto it:arr) cout << it << " ";

}