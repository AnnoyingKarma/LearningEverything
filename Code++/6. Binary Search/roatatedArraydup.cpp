#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
  int s=0,e=nums.size()-1;
  while(s<=e){
    int mid=s+((e-s)/2);
    if(nums[mid]==target){
      return true;
    }
    else if(nums[s]==nums[mid] && nums[mid+1]==nums[e]){
      ++s,--e;
    }
    else if(nums[s]<=nums[mid]){
      if(target<=nums[mid] && target>=nums[s]) e=mid-1;
      else s=mid+1;
    }
    else {
      if(target<=nums[e] && target>=nums[mid+1]) s=mid+1;
      else e=mid-1;
    }
  }
  return false;
}


int main(){
  vector<int> nums={1,0,1,1,1};
  cout << search(nums,0);
}