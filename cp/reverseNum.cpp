#include <iostream>
using namespace std;

int main(){
	int n,k=0,reverseNum=0;  
    cin>>n;
    if(n<0){
    n=abs(n);
    while(n>0){
        int x=n%10;
        reverseNum = (k*10)+x;
        k=reverseNum;
        n/=10;
    }
    reverseNum=-reverseNum;
    }
    else{
    while(n>0){
        int x=n%10;
        reverseNum = (k*10)+x;
        k=reverseNum;
        n/=10;
    }
    }
    cout << reverseNum; 
}