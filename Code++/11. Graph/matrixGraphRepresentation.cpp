#include <iostream>
using namespace std;
/*
input 
  0 1 
  1 2 
*/

int main(){
  //n = number of vertices , m = number of directions in input or edges
  int N=3,M=2;
  int undirectedMatrix[N][N];
  int directedMatrix[N][N];

  for(int i=0; i<M; ++i){
    int v1,v2;
    undirectedMatrix[v1][v2]=1; //or = weight
    undirectedMatrix[v2][v1]=1;
    directedMatrix[v1][v2]=1;// or = weight
  }

  //space complexity will be n*n

}