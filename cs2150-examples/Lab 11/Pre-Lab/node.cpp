//Robert Alexander, RMA3MZ, node.cpp

#include "node.h"

using namespace std;

node::node(string n){
  name=n;
  indegree=0;}

void node::addAdj(node* n){
  adjList.push_back(n);
}
