#include <iostream>
#include <vector>
using namespace std;

/*
  input 
  0 1 weight
  1 2 weight
*/

int main(){

  int N = 3,  M=2;
  vector<int> undirectedGraph[N];
  vector<int> directedGraph[N];

  //to make weighted directed graph
  vector<pair<int,int>> weightedGraph[N];

  for(int i=0; i<M; i++){
    int v1,v2,weight;
    undirectedGraph[v1].push_back(v2);
    undirectedGraph[v2].push_back(v1);
    directedGraph[v1].push_back(v2);

    weightedGraph[v1].push_back(make_pair(v2,weight));     
    weightedGraph[v1].emplace_back(v2,weight);
  }

}